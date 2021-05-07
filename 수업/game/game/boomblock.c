#include<stdio.h>
#include"tetris.h"

extern int block_row, block_column, block_dir, block_type;
extern char playground[MY_HIGH][MY_WIDTH];
extern char oldplayground[MY_HIGH][MY_WIDTH];
extern char baseground[MY_HIGH][MY_WIDTH];
extern char basegroundtwo[MY_HIGH][MY_WIDTH];

void boomblock(int y, int x) {
		/*	if (block_type == BOOM_BLOCK){
			if (!checkmove(block_row, block_column, block_dir))	 {
			if(block_row+1 != MY_WALL && (block_column+1 != MY_WALL && block_column-1 != MY_WALL))

			playground[block_row-1][block_column-1] = basegroundtwo[block_row - 1][block_column - 1];
			playground[block_row-1][block_column] = basegroundtwo[block_row - 1][block_column];
			playground[block_row-1][block_column+1] = basegroundtwo[block_row - 1][block_column + 1];
			playground[block_row][block_column-1] = basegroundtwo[block_row][block_column - 1];
			playground[block_row][block_column] = basegroundtwo[block_row][block_column];
			playground[block_row][block_column+1] = basegroundtwo[block_row][block_column + 1];
			playground[block_row+1][block_column-1] = basegroundtwo[y - 1][x - 1];
			playground[block_row+1][block_column] = basegroundtwo[block_row + 1][block_column];
			playground[block_row+1][block_column+1] = basegroundtwo[block_row + 1][block_column + 1];
			
			if (baseground[block_row + 1][block_column] == MY_WALL || (baseground[block_row][block_column - 1] == MY_WALL || baseground[block_row][block_column + 1] == MY_WALL)) {
		 	 playground[][]
			}*/

			baseground[y - 2][x - 1] = basegroundtwo[y - 2][x - 1];
			baseground[y - 2][x] = basegroundtwo[y - 2][x];
			baseground[y - 2][x + 1] = basegroundtwo[y - 2][x + 1];
			baseground[y - 1][x - 1] = basegroundtwo[y - 1][x - 1];
			baseground[y - 1][x] = basegroundtwo[y - 1][x];
			baseground[y - 1][x + 1] = basegroundtwo[y - 1][x + 1];
			baseground[y][x - 1] = basegroundtwo[y][x - 1];
			baseground[y][x] = basegroundtwo[y][x];
			baseground[y][x + 1] = basegroundtwo[y][x + 1];
}