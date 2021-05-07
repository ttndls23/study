#include"map.h"
#include<stdio.h>


int getKey(){

		int key;
		key = getch();
		if(key == 224){
		key = getch();
		}
		return key;
}
//좌표값 바꾸기 전에... 먼저 그 자리 채우고 바꿔주기