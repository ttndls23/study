#include<stdio.h>
#include<Windows.h>

void gotoxy(int x, int y){

static HANDLE h = NULL;
COORD c = { x, y };

if (!h){
	h = GetStdHandle(STD_OUTPUT_HANDLE);
}


SetConsoleCursorPosition(h, c);

}
