#include<stdio.h>
#include<Windows.h>
#include<time.h>
#include"tetris.h"

unsigned char baseground[MY_HIGH][MY_WIDTH];
unsigned char minibaseground[MY_MINI_HIGH][MY_MINI_WIDTH];
unsigned char miniplayground[MY_MINI_HIGH][MY_MINI_WIDTH];
int block_type, block_type_two, block_dir, block_dir_two, block_row, block_column, gotoxy_x, gotoxy_y, best_score;
int score = 0 , count = 0, stage = 1;


int main(){

	unsigned char key;
	int row, column, dir;
	int delayTime = MY_DELAY_TIME;
	int i, ti = 1000;
	int next_stage = 100;
	
	CONSOLE_CURSOR_INFO CurInfo;

	CurInfo.dwSize = 1;
	CurInfo.bVisible = FALSE;
	SetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE), &CurInfo);

	system("mode con: cols=100 lines=50");
	
	if (1){
		init(); // ��, ����ġ ����
		bringbestscore();
		if (block_type == NULL) { 
			block_type = block_type_two;
		}
		if (block_dir == NULL) {
			block_dir = block_dir_two;
		}
		display(1); // baseground�� playground�� �����Ѵ�. ���� ��ġ�� ����Ͽ� playgrond�� �߰��Ѵ�., playground�� ����â�� ����Ѵ�., playground�� oldplayround�� ���Ͽ� ���� �ٸ� �κи� ����Ѵ�.
		prepre(1);
		while(1){

			initpre();

			key = NULL;

			if(delayFunction(ti)) { // ���ʰ� �Ѿ��(return 1) �� ĭ �Ʒ���
				key = MY_KEY_DOWN;
			}

			else
				key=getkey();

			if (key != NULL) {
				if (key == 'q') { 
					gameover();
					break; 
				}
				if (key == MY_KEY_R) {
					gameover();
					system("cls");
					init();
					display(1);
					key = NULL;
					score = 0;
				
				}
			}

			getmove(key, &row, &column, &dir);

			if(checkmove(row, column, dir)){ // ���� �� ������ ������ return 1, ������ return 0
				moveBlock(row, column, dir); // ex) block_row = row
				display(1); // �� ��ġ ����ؼ� playground�� ��Ÿ��
				removeLines();
			}

			else if(key == MY_KEY_DOWN){ // if���� �� Ÿ�� else if���� Ÿ�� ������.
					
				if (block_type != BOOM_BLOCK) {
					copyBlock(); // block�� �̵��� baseground��...
				}

			//	display(1);
				block_type = block_type_two;
				block_dir = block_dir_two;
				newblock();		//���ο� block����
				display(1);		// baseground�� playground�� �����Ѵ�. ���� ��ġ�� ����Ͽ� playgrond�� �߰��Ѵ�., playground�� ����â�� ����Ѵ�., playground�� oldplayround�� ���Ͽ� ���� �ٸ� �κи� ����Ѵ�.	
				if(checkFinish()==1){
					gotoxy(gotoxy_x + 3, gotoxy_y);
					printf("�ٽ��Ͻ÷��� r�� �����ּ���.");
					key = getch();
						
					if (key != MY_KEY_R) {
						gameover();
						break;
					}
					gameover();
					system("cls");
					init();
					display(1);
					}
					//display(1);
				}

			if (score > next_stage) {
				system("cls");
				stage = stage + 1;
				next_stage = next_stage + 100;
				ti = ti - 100;
				init();
				display(1);
			}
		}
	}
	
	else{

	for(;;){
		init();
		display(1);
		for(i=0; i<25; i++){
			Sleep(100);
			block_row++;
			display(1);}
		}
	}
}