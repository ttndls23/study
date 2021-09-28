#include "map.h"

extern int playMap[PUSHSIZE][PUSHSIZE];
extern int pushPushMap[LEVELSIZE][PUSHSIZE][PUSHSIZE];
extern cor player;
extern int level;

int checkFinish(){
	
//	내가한거 if((playMap[player.y][player.x] == PACKAGE && pushPushMap[LEVELSIZE][player.y][player.x] == TARGET))

	int i, k;
	for(i=0; i<PUSHSIZE; i++){
		for(k=0; k<PUSHSIZE; k++){
			if(pushPushMap[level][i][k] == TARGET){
				if(playMap[i][k] != PACKAGE){
					return NOT_FINISH;
				}
			}
		}
	}
	return FINISH;
}