#include"map.h"
#include<stdio.h>
#include<Windows.h>

extern int pushPushMap[LEVELSIZE][PUSHSIZE][PUSHSIZE];
extern cor player;

void display(int (*map)[PUSHSIZE]){

	int i,k,level;
	system("cls");

		for(i=0; i<PUSHSIZE; i++){
			for(k=0; k<PUSHSIZE; k++){

				switch((map[i][k])){
			
				case SPACE:
					printf("  ");
					break;
				case WALL:
					printf("��");
					break;
				case BLOCK:
					printf("��");
					break;
				case TARGET:
					printf("��");
					break;
				case PLAYER:
					printf("��");
					break;
				case PACKAGE:
					printf("��");
					break;
				default :
					break;

				}	
			}
		printf("\n");
	}
	printf("player : (%d,%d)\n", player.y, player.x);
}