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
//��ǥ�� �ٲٱ� ����... ���� �� �ڸ� ä��� �ٲ��ֱ�