#include<stdio.h>
#include"tetris.h"

extern int *row, *column, *dir;
extern int block_type, block_dir, block_row, block_column;
extern Point blockType[NUM_BLOCK][4][4];
extern char oldplayground[MY_HIGH][MY_WIDTH];
extern char baseground[MY_HIGH][MY_WIDTH];

int checkmove(int row, int column, int dir){

	int i, x, y;

	for(i=0; i<4; i++){
	
		y = row + blockType[block_type][dir][i].row;
		x = column + blockType[block_type][dir][i].column;

		if (baseground[y][x] != MY_SPACE) {	// baseground가 비어있지 않으면, 즉, 움직일 수 없으면 근데 왜 baseground??
			if (block_type == BOOM_BLOCK) {
				boomblock(y,x);
			}
			return 0;
		}
	}
	return 1;
}