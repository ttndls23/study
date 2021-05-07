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
				break; // k�� break. i�� break���� ����
			}
		}
		if(k<PUSHSIZE) break;//PUSHSIZE�� ũ�� ������ �׳� if�� �� ���°� ����
	}
}