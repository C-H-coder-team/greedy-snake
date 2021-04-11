#pragma once
#ifndef SNAKE_START_H
#define SNAKE_START_H
#include"stdc++.h"

/**地图的长宽，蛇的坐标，长度，方向，食物的位置*/
int m, n;
struct node 
{
	int x;
	int y;
};
node snake[1000];
int snake_length, dir;
node food;
int direct[4][2] = { { -1,0 },{ 1,0 },{ 0,-1 },{ 0,1 } };

/**定位光标*/
HANDLE hout = GetStdHandle(STD_OUTPUT_HANDLE);
COORD coord;
void locate(int x, int y)
{
	coord.X = y;
	coord.Y = x;
	SetConsoleCursorPosition(hout, coord);
}

/**隐藏光标*/
void hide() 
{
	CONSOLE_CURSOR_INFO cursor_info = { 1,0 };
	SetConsoleCursorInfo(hout, &cursor_info);
}

/**生成随机数*/
double random(double start, double end) 
{
	return start + (end - start)*rand() / (RAND_MAX + 1.0);

}

#endif // !SNAKE_RUN_H
