#include<stdio.h>
#include"tetris.h"

extern int block_type, block_dir, block_row, block_column;
extern Point blockType[NUM_BLOCK][4][4];
extern unsigned char baseground[MY_HIGH][MY_WIDTH];
extern unsigned char playground[MY_HIGH][MY_WIDTH];

void copyBlock(){

	int i, x, y;
	for(i = 0; i<4; i++){
		y = block_row + blockType[block_type][block_dir][i].row;
		x = block_column + blockType[block_type][block_dir][i].column;	
	
		baseground[y][x] = NUM_BLOCK;
	}
}