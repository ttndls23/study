#include"tetris.h"

extern int stage, plus_score = 10;
extern int gotoxy_x, gotoxy_y, best_score, score;

void removeLines() {

	int i;

	for (i = MY_HIGH - 2; i > 0; i--) {

		if (removeLine(i)) {
			display(0); //0이면? 어케되나
			i++;
			score += plus_score;
			plus_score = plus_score + 10;
		}
	}

	gotoxy(gotoxy_x + 3, gotoxy_y - 4);
	printf("stage : %d\n", stage);
	gotoxy(gotoxy_x + 3, gotoxy_y - 3);
	printf("score : %d", score);
	gotoxy(gotoxy_x + 3, gotoxy_y - 2);
	printf("bestscore : %d", best_score);

}