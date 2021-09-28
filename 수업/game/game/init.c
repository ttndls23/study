#include<stdio.h>
#include<Windows.h>
#include"tetris.h"

unsigned char oldplayground[MY_HIGH][MY_WIDTH];
unsigned char basegroundtwo[MY_HIGH][MY_WIDTH];
extern char minibaseground[MY_MINI_HIGH][MY_MINI_WIDTH];
extern char baseground[MY_HIGH][MY_WIDTH];
int block_type, block_dir, block_row, block_column;
extern int gotoxy_x, gotoxy_y, block_type_two, block_dir_two;

void init() {
	int i, j;             
	//baseground 초기화
	for (i = 0; i < MY_HIGH; i++) {
		for (j = 0; j < MY_WIDTH; j++) {
			baseground[i][j] = MY_SPACE;
		}
	}

	for (i = 0; i < MY_WIDTH; i++)
		baseground[0][i] = MY_WALL;
	for (i = 0; i < MY_WIDTH; i++)
		baseground[MY_HIGH - 1][i] = MY_WALL;
	for (i = 0; i < MY_HIGH; i++)
		baseground[i][0] = MY_WALL;
	for (i = 0; i < MY_HIGH; i++)
		baseground[i][MY_WIDTH - 1] = MY_WALL;

	for (i = 0; i < MY_HIGH; i++) {
		for (j = 0; j < MY_WIDTH; j++) {
			basegroundtwo[i][j] = baseground[i][j];
		}
	}

	//블럭선택
	//block_dir = 어떤 방향으로 나올것인가.
	block_type_two = rand() % MY_NUM_BLOCK;
	block_dir_two = rand() % 4;

	//블럭을 인쇄할 위치값 초기화
	block_row = 1;
	block_column = (rand() % (MY_WIDTH - 5)) + 1;

	//oldplayground 초기화
	//display에서 oldplayground와 playground의 값이 다른 경우에만 인쇄하기 때문에
	//처음 게임을 시작할 때 display되게 하기 위해 초기화한다.

	for(i=0; i < MY_HIGH; i++){
		for(j=0; j < MY_WIDTH; j++){
			oldplayground[i][j] = 0xFF;
		}
	}
}