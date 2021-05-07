#include"map.h"

extern int playMap[PUSHSIZE][PUSHSIZE];
extern cor player;

int checkMove(int key){
	cor moveCor;

	//�̵��� ��ġ ���
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

	//�̵��� ��ġ�� ���� Ȯ��
	if(playMap[moveCor.y][moveCor.x] == SPACE || playMap[moveCor.y][moveCor.x] == TARGET){
		return 1; // return MOVING
	}

	return 0; // return NOT_MOVING

}