#include "map.h"
#include<stdio.h>

extern int pushPushMap[LEVELSIZE][PUSHSIZE][PUSHSIZE];
int playMap[PUSHSIZE][PUSHSIZE];
cor player;
int level;

int main(){

	int key;
	int ans;
	level = 0;

	while(level < LEVELSIZE){
		init();
		display(playMap);

		while(1){
			key = getKey();
			if(checkMove(key)) move(key);
			display(playMap);
		

			if(checkFinish()){
		
				printf("YOU WIN!!\n");
				ans = answer();
				break;
			}
		}
		if(ans == 'y'){ 
			level++;
			}
		else break;
	}

	printf("준비된 level이 끝났습니다.");
	getchar();
	getchar();
	return 0;
	


}