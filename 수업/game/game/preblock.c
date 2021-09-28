#include<stdio.h>
#include"tetris.h"

extern Point preblockType[NUM_BLOCK][4][4];
extern char playground[MY_HIGH][MY_WIDTH];
extern int block_row, block_column, block_dir, block_type;
int preblock_type, preblock_dir, preblock_row, preblock_column;

void preblock() { 

	int i,x,y; 
	int row, block_row_copy;

	block_row_copy = block_row;

	while (checkmove(block_row, block_column, block_dir)) {
		block_row++;
		row = block_row;
	}
	row = block_row--;
	block_row = block_row_copy;
	
	for (i = 0; i < 4; i++) {
			//block_row = 1, blockType[블럭모양][블럭방향][4이하]
			//block_column = (rand() % (MY_WIDTH - 5)) + 1;, 
			x = row + preblockType[block_type][block_dir][i].row;
			y = block_column + preblockType[block_type][block_dir][i].column;

			playground[x-1][y] = PRE_BLOCK;

		}
}