#ifndef TETRIS
#define TETRIS


#define MY_NUM_BLOCK	6
#define MY_HIGH			25       //50
#define MY_WIDTH		15          //25
#define MY_WIDTH_TWO	24
#define MY_DELAY_TIME	1000
#define MY_MIN_DELAY	100
#define MY_MINI_HIGH	7
#define MY_MINI_WIDTH	7


#define MY_SPACE		0x0F
#define MY_WALL			0xF0
#define NUM_BLOCK		4
#define NUM_BLOCK_1		0
#define NUM_BLOCK_2		1
#define NUM_BLOCK_3		2
#define NUM_BLOCK_4		3
#define NUM_BLOCK_5		4
#define BOOM_BLOCK		5
#define PRE_BLOCK		10

#define MY_KEY_UP		 72
#define MY_KEY_DOWN		 80
#define MY_KEY_RIGHT	 77
#define MY_KEY_LEFT		 75
#define MY_KEY_SPACE	 32
#define MY_KEY_STOP		 0
#define MY_KEY_P	 	 112
#define MY_KEY_Q		 113
#define MY_KEY_R		 114

typedef struct _Point{
	int row;
	int column;
} Point;

void init();
void gotoxy();
unsigned char getkey();
void display(int);
int delayFunction(unsigned int);
void getmove(int, int *, int *, int *);
void moveBlock(int, int, int);
int checkmove(int, int, int);
void copyBlock();
void newblock();
int removeLine(int);
void removeLines();
int checkFinish();
void boomblock();
void preblock();
void initpre();
void bringbestscore();
void gameover();

#endif