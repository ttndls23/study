#ifndef _PUSHPUSH
#define _PUSHPUSH

#define PUSHSIZE	  15
#define LEVELSIZE	  3

#define SPACE		  0
#define WALL		  1
#define BLOCK		  2
#define TARGET		  4
#define PLAYER		  8
#define PACKAGE		  9

#define KEY_UP		72
#define KEY_DOWN	80
#define KEY_RIGHT	77
#define KEY_LEFT	75

#define FINISH		1
#define NOT_FINISH	0

typedef struct _cor{
	int x;
	int y;
} cor;

void	init();
void	display(int (*map)[PUSHSIZE]);
int		getKey();
int		checkMove(int key);
void	move(int key);
int		checkFinish();
char		answer();

#endif