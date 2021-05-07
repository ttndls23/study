#include<stdio.h>
#include"tetris.h"

extern int block_dir;
extern int block_row;
extern int block_column;

void moveBlock(int row, int column, int dir){

	block_row = row;
	block_column = column;
	block_dir = dir;

}