#include<stdio.h>
#include"tetris.h"

extern int score, best_score;

void gameover() {

	FILE *file;

	if (score > best_score) {
		file = fopen("scoreFile.txt", "w");
		if (file == NULL) {
			printf("������ �����ϴ�.");
		}
		else {
			fprintf(file, "%d", score);
			fclose(file);
		}
	}
}