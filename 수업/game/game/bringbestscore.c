#include<stdio.h>
#include"tetris.h"

extern int best_score;

void bringbestscore() {
	FILE *file;

	file = fopen("scoreFile.txt", "r");
	if (file == NULL) {
		best_score = 0;
	}
	else {
		fscanf(file, "%d", &best_score);
		fclose(file);
	}
}