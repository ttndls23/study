#include<stdio.h>
#include"tetris.h"

extern int block_dir, block_row, block_column, score;

void getmove(int key, int *row, int *column, int *dir){

	*row = block_row;
	*column = block_column;
	*dir = block_dir;

	switch(key){

	case MY_KEY_SPACE: //space

		while (checkmove(block_row, block_column, block_dir)) {
			block_row++;
			*row = block_row;
		}
		*row = block_row--;
		break;

	case MY_KEY_P:

		key = getch();
		while (key != MY_KEY_P) {
			key = getch();
		}
		key = MY_KEY_DOWN;

		break;

	/*case MY_KEY_R:
		system("cls");
		init();
		display(1);
		key = NULL;
		score = 0;
		break;*/

	case MY_KEY_UP:
		*dir = (block_dir + 1) % 4;
		break;

	case MY_KEY_DOWN:
		*row = block_row + 1;
		break;

	case MY_KEY_RIGHT:
		*column = block_column + 1;
		break;

	case MY_KEY_LEFT:
		*column = block_column - 1;
		break;

	default :
		break;

	}
}

