#include"map.h"
#include<stdio.h>
extern int pushPushMap[LEVELSIZE][PUSHSIZE][PUSHSIZE];
extern int playMap[PUSHSIZE][PUSHSIZE];
extern cor player;
extern int level;
void move(int key){

	cor move;

	move.x = player.x;
	move.y = player.y;

	switch(key){
		case KEY_UP:
			move.y--;
			break;

		case KEY_DOWN :
			move.y++;
			break;

		case KEY_RIGHT :
			move.x++;
			break;

		case KEY_LEFT :
			move.x--;
			break;

		default :
			break;

	}

	if(playMap[move.y][move.x]==PACKAGE){	
		switch(key){
		case KEY_UP:
			playMap[move.y-1][move.x] = PACKAGE;
			break;

		case KEY_DOWN :
			playMap[move.y+1][move.x] = PACKAGE;
			break;

		case KEY_RIGHT :
			playMap[move.y][move.x+1] = PACKAGE;
			break;

		case KEY_LEFT :
			playMap[move.y][move.x-1] = PACKAGE;
			break;

		default :
			break;

		}
	}
	
	//player 이동
		playMap[move.y][move.x] = PLAYER;

	//player 흔적 지우기
		if(pushPushMap[level][player.y][player.x]==TARGET){
			playMap[player.y][player.x] = pushPushMap[level][player.y][player.x];
		}
		else playMap[player.y][player.x] = 0;
	
	//player 새로운 좌표 설정
		player.x = move.x;
		player.y = move.y;
	
	
	

}