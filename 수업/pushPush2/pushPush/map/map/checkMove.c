#include"map.h"

extern int playMap[PUSHSIZE][PUSHSIZE];
extern cor player;

int checkMove(int key){
	cor moveCor;

	//이동할 위치 계산
	moveCor = player;

	switch(key){
		
	case KEY_UP :		

		moveCor.y--;
		if(playMap[moveCor.y][moveCor.x] == PACKAGE) moveCor.y--;
		break;
		
	case KEY_DOWN :	

		moveCor.y++;
		if(playMap[moveCor.y][moveCor.x] == PACKAGE) moveCor.y++;
		break;

	case KEY_RIGHT :	
	
		moveCor.x++;
		if(playMap[moveCor.y][moveCor.x] == PACKAGE) moveCor.x++;
		break;

	case KEY_LEFT :	

		moveCor.x--;
		if(playMap[moveCor.y][moveCor.x] == PACKAGE) moveCor.x--;
		break;

	default:
		break;
	}

	//이동할 위치의 상태 확인
	if(playMap[moveCor.y][moveCor.x] == SPACE || playMap[moveCor.y][moveCor.x] == TARGET){
		return 1; // return MOVING
	}

	return 0; // return NOT_MOVING

}