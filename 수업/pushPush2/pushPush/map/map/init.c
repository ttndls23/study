#include"map.h"
#include<stdio.h>


extern int pushPushMap[LEVELSIZE][PUSHSIZE][PUSHSIZE];
extern int playMap[PUSHSIZE][PUSHSIZE];
extern cor player;
extern int level;

void init(){
	int i, k;
	for(i=0; i<PUSHSIZE; i++){
		for(k=0; k<PUSHSIZE; k++){
			playMap[i][k] = pushPushMap[level][i][k];
		}
	}

	for(i=0; i<PUSHSIZE; i++){
		for(k=0; k<PUSHSIZE; k++){
			if(playMap[i][k] == PLAYER){
				player.x = k;
				player.y = i;
				break; // k의 break. i는 break되지 않음
			}
		}
		if(k<PUSHSIZE) break;//PUSHSIZE가 크지 않으면 그냥 if문 안 쓰는게 나음
	}
}