#include<stdio.h>
#include"tetris.h"

Point blockType[MY_NUM_BLOCK][4][4] = {
	{
		{{1,0},{0,1},{1,1},{2,1}},
		{{0,1},{1,0},{1,1},{1,2}},
		{{0,0},{1,0},{2,0},{1,1}},
		{{0,0},{0,1},{0,2},{1,1}}
	},
	{
		{{0,0},{1,0},{2,0},{2,1}},
		{{0,0},{0,1},{0,2},{1,0}},
		{{0,0},{0,1},{1,1},{2,1}},
		{{0,2},{1,0},{1,1},{1,2}}
	},
	{
		{{0,0},{1,0},{2,0},{3,0}},
		{{0,0},{0,1},{0,2},{0,3}},
		{{0,0},{1,0},{2,0},{3,0}},
		{{0,0},{0,1},{0,2},{0,3}}
	},
	{
		{{0,0},{0,1},{1,0},{1,1}},
		{{0,0},{0,1},{1,0},{1,1}},
		{{0,0},{0,1},{1,0},{1,1}},
		{{0,0},{0,1},{1,0},{1,1}}
	},
	{
		{{0,0},{1,0},{2,0},{0,1}},
		{{0,0},{0,1},{0,2},{1,2}},
		{{0,1},{1,1},{2,0},{2,1}},
		{{0,0},{1,0},{1,1},{1,2}}
	},
	{
		{{0,0},{0,0},{0,0},{0,0}},
		{{0,0},{0,0},{0,0},{0,0}},
		{{0,0},{0,0},{0,0},{0,0}},
		{{0,0},{0,0},{0,0},{0,0}}
	}
};