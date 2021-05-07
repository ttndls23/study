#include<stdio.h>
#include"tetris.h"
#include<Windows.h>

//flag = 1 , block �߰�
//flag = 0, remove line  -> ���߰� ����

unsigned char playground[MY_HIGH][MY_WIDTH], minioldplayground[MY_MINI_HIGH][MY_MINI_WIDTH];
extern char oldplayground[MY_HIGH][MY_WIDTH];
extern char baseground[MY_HIGH][MY_WIDTH];
extern char minibaseground[MY_MINI_HIGH][MY_MINI_WIDTH];
extern int block_type, block_dir, block_row, block_column;
extern Point blockType[NUM_BLOCK][4][4];
extern Point preblockType[NUM_BLOCK][4][4];
int gotoxy_x, gotoxy_y;

void display(int flag){

	int i, k, y, x, block;

	if(block_type == 0) block = NUM_BLOCK_1;
	if(block_type == 1) block = NUM_BLOCK_2;
	if(block_type == 2) block = NUM_BLOCK_3;
	if(block_type == 3) block = NUM_BLOCK_4;
	if(block_type == 4) block = NUM_BLOCK_5;
	if(block_type == 5) block = BOOM_BLOCK;

	for(i=0; i<MY_HIGH; i++){							//baseground�� playground�� �����Ѵ�.
		for(k = 0; k < MY_WIDTH; k++){
			playground[i][k] = baseground[i][k];
		}
	}

	if(flag = 1){										//���� ��ġ�� ����Ͽ� playgrond�� �߰��Ѵ�.
		
		for(i=0; i<4; i++){
			
			//block_row = 1, blockType[�����][������][4����]
			//block_column = (rand() % (MY_WIDTH - 5)) + 1;

			x = block_row + blockType[block_type][block_dir][i].row;
			y = block_column + blockType[block_type][block_dir][i].column;

			//preblock(); // �׸��� ��� ���⿡ �θ� �ϳ��� ���� ���� �������� �� �����
			playground[x][y] = NUM_BLOCK;
			preblock(); // �׸��� ���

		}
			
	}

	//playground�� ����â�� ����Ѵ�.
	for(i = 0; i < MY_HIGH; i++){
		for(k = 0; k < MY_WIDTH; k++){
			
			if(playground[i][k] != oldplayground[i][k]){	//playground�� oldplayround�� ���Ͽ� ���� �ٸ� �κи� ����Ѵ�.
				
				gotoxy(k*2,i);
				gotoxy_x = k * 2;
				gotoxy_y = i;
				
				switch(playground[i][k]){

					case MY_SPACE :
						printf("  ");
						break;
					case MY_WALL :

						SetConsoleTextAttribute( GetStdHandle(STD_OUTPUT_HANDLE), 7); 
						printf("��");
						break;

					case PRE_BLOCK: // �׸��� ���
						printf("��");
						break;
					

					case NUM_BLOCK:

						switch(block){

						case  NUM_BLOCK_1:
							SetConsoleTextAttribute( GetStdHandle(STD_OUTPUT_HANDLE), 10);
							printf("��");
							 
							SetConsoleTextAttribute( GetStdHandle(STD_OUTPUT_HANDLE), 15); 
							
						break;

						case  NUM_BLOCK_2:
							SetConsoleTextAttribute( GetStdHandle(STD_OUTPUT_HANDLE), 11);
							printf("��");
							
							SetConsoleTextAttribute( GetStdHandle(STD_OUTPUT_HANDLE), 15); 
						break;

						case  NUM_BLOCK_3:
							SetConsoleTextAttribute( GetStdHandle(STD_OUTPUT_HANDLE), 12);
							printf("��");
							
							SetConsoleTextAttribute( GetStdHandle(STD_OUTPUT_HANDLE), 15); 
						break;

						case  NUM_BLOCK_4:
							SetConsoleTextAttribute( GetStdHandle(STD_OUTPUT_HANDLE), 13);
							printf("��");
							
							SetConsoleTextAttribute( GetStdHandle(STD_OUTPUT_HANDLE), 15); 						
						break;

						case  NUM_BLOCK_5:
							SetConsoleTextAttribute( GetStdHandle(STD_OUTPUT_HANDLE), 14);
							printf("��");
							
							SetConsoleTextAttribute( GetStdHandle(STD_OUTPUT_HANDLE), 15); 
							
						break;

						case BOOM_BLOCK:
							printf("��");
							break;
						 
						default:
							break;
						
						
						}
	

				default:
					break;

				}
			}
		}
	}

	//playground�� oldground�� copy
	for(i = 0; i<MY_HIGH; i++){
		for(k = 0; k<MY_WIDTH; k++){
			oldplayground[i][k] = playground[i][k];	
		}
	
	}
	prepre(1);

}