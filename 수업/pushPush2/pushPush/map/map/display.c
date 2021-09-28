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
					printf("¡à");
					break;
				case BLOCK:
					printf("¡á");
					break;
				case TARGET:
					printf("¡Ù");
					break;
				case PLAYER:
					printf("¢ç");
					break;
				case PACKAGE:
					printf("¡Ú");
					break;
				default :
					break;

				}	
			}
		printf("\n");
	}
	printf("player : (%d,%d)\n", player.y, player.x);
}