#include"tetris.h"
#include<stdio.h>
#include<Windows.h>

extern int block_dir, block_column, block_row;

int checkFinish(){

	int flag = 1;
	int dir = block_dir;

	if(!checkmove(block_row, block_column, block_dir)){	//������ �� ������ 1,if�� ���ư�
		return flag;
	}

	if(checkmove(block_row+1, block_column, block_dir)) return 0; // ������ �� ������ return 0?
	else if( checkmove(block_row, block_column+1, block_dir)) return 0;
	else if( checkmove(block_row, block_column-1, block_dir)) return 0;
	else if( checkmove(block_row, block_column, (block_dir = rand() % 4))) return 0;
	
	return 1;

}