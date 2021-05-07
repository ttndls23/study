#include<stdio.h>
#include<Windows.h>
#include"tetris.h"
#include<time.h>


extern int block_type, block_type_two;
extern int block_dir, block_dir_two;
extern int block_row;
extern int block_column;

void newblock(){

	srand(time(NULL));
	
	block_type_two = rand() % MY_NUM_BLOCK;
	block_dir_two = rand() % 4;
	block_row = 1;
	block_column = (rand()%(MY_WIDTH-5))+1;

	prepre(1);
}