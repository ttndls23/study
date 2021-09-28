#include<stdio.h>
#include"tetris.h"
#include<Windows.h>

extern int gotoxy_x, gotoxy_y, block_type_two, block_type, block_dir, block_row, block_column, block_dir_two;
extern char minibaseground[MY_MINI_HIGH][MY_MINI_WIDTH], miniplayground[MY_MINI_HIGH][MY_MINI_WIDTH], minioldplayground[MY_MINI_HIGH][MY_MINI_WIDTH];
extern Point blockType[NUM_BLOCK][4][4];

void prepre(int flag) {

	int i, k, block;
	int x, y;

	if (block_type_two == 0) block = NUM_BLOCK_1;
	if (block_type_two == 1) block = NUM_BLOCK_2;
	if (block_type_two == 2) block = NUM_BLOCK_3;
	if (block_type_two == 3) block = NUM_BLOCK_4;
	if (block_type_two == 4) block = NUM_BLOCK_5;
	if (block_type_two == 5) block = BOOM_BLOCK;

	for (i = 0; i < MY_MINI_HIGH; i++) {							//baseground를 playground에 복사한다.
		for (k = 0; k < MY_MINI_WIDTH; k++) {
			miniplayground[i][k] = minibaseground[i][k];
		}
	}

	if (flag = 1) {

		for (i = 0; i < 4; i++) {

			//block_row = 1, blockType[블럭모양][블럭방향][4이하]
			//block_column = (rand() % (MY_WIDTH - 5)) + 1;, 
			x = 2 + blockType[block_type_two][block_dir_two][i].row;
			y = 2 + blockType[block_type_two][block_dir_two][i].column;

			miniplayground[x][y] = NUM_BLOCK;
			//	preblock();

		}
	}

	for (i = 0; i < MY_MINI_HIGH; i++) {
		for (k = 0; k < MY_MINI_WIDTH; k++) {

		//	if (miniplayground[i][k] != minioldplayground[i][k]) {

				gotoxy(gotoxy_x + 2 * k + 6, i + 2);

				switch (miniplayground[i][k]) {

				case MY_SPACE:
					printf("  ");
					break;

				case MY_WALL:
					SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
					printf("■");
					break;

				case NUM_BLOCK:

					switch (block) {

					case  NUM_BLOCK_1:
						SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 10);
						printf("■");
						SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);

						break;

					case  NUM_BLOCK_2:
						SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 11);
						printf("■");
						SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
						break;

					case  NUM_BLOCK_3:
						SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 12);
						printf("■");
						SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
						break;

					case  NUM_BLOCK_4:
						SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 13);
						printf("■");
						SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
						break;

					case  NUM_BLOCK_5:
						SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 14);
						printf("■");
						SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);

						break;

					case BOOM_BLOCK:
						printf("®");
						break;

					default:
						break;
					}
				default:
					break;
					
				}
			}
		}

		for (i = 0; i < MY_MINI_HIGH; i++) {
			for (k = 0; k < MY_MINI_WIDTH; k++) {
				minioldplayground[i][k] = miniplayground[i][k];
			}
		}
	}
