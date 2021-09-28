#include"tetris.h"

extern unsigned char baseground[MY_HIGH][MY_WIDTH];

int removeLine(int line){

	int i,j;

	for(i=1; i<MY_WIDTH-1; i++){
		if (baseground[line][i] == MY_SPACE) {
			return 0; // �� �ٿ� ����� ������ return 0;
		}
	}

	for(i=line; i>1; i--){
		for(j=1; j<MY_WIDTH; j++){
			baseground[i][j] = baseground[i-1][j]; // ���� �� �Ʒ� �ٷ� ����
		}
	}
	return 1;
}
