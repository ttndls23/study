#include<Windows.h>
#include<stdio.h>
#include"tetris.h"

unsigned char getkey(){

	unsigned char key = NULL;

	if(kbhit()){
		key = getch();
		if(key == 224){
			key = getch();
		}
	
	}
	return key;

}