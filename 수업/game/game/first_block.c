#include<stdio.h>
#include"tetris.h"

extern int gotoxy_x, gotoxy_y;
extern char minibaseground[MY_MINI_HIGH][MY_MINI_WIDTH];


void initpre() {

	int i,j;

	//�� �ְ� �̸�����

/*	gotoxy(gotoxy_x + 6, gotoxy_y - 22);
	printf("��������\n");
	for (i = 21; i > 16; i--) {
		gotoxy(gotoxy_x + 6, gotoxy_y - i);
		printf("��          ��\n");
	}
	gotoxy(gotoxy_x + 6, gotoxy_y - 16);
	printf("��������\n");*/


	//���� ���� �̸����⸸ �ؿ� �� ��� �� �� ���� �̸����� ��.

	for (i = 0; i < MY_MINI_HIGH; i++) {
		for (j = 0; j < MY_MINI_WIDTH; j++) {
			minibaseground[i][j] = MY_SPACE;
		}
	}

	for (i = 0; i < MY_MINI_WIDTH; i++)
		minibaseground[0][i] = MY_WALL;
	for (i = 0; i < MY_MINI_WIDTH; i++)
		minibaseground[MY_MINI_HIGH - 1][i] = MY_WALL;
	for (i = 0; i < MY_MINI_HIGH; i++)
		minibaseground[i][0] = MY_WALL;
	for (i = 0; i < MY_MINI_HIGH; i++)
		minibaseground[i][MY_MINI_WIDTH - 1] = MY_WALL;

	prepre(1);

}