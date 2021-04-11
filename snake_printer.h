#pragma once
#ifndef SNAKE_PRINTER_H
#define SNAKE_PRINTER_H
#include"stdc++.h"
#include"snake_start.h"
/**输出墙*/
void print_wall(int n, int m)
{
	cout << " ";
	for (int i = 0; i<n; i++)
	{
		cout << "-";
	}
	cout << " " << endl;
	for (int j = 0; j<m; j++)
	{
		cout << "|";
		for (int k = 0; k<n; k++)
		{
			cout << " ";
		}
		cout << "|" << endl;
	}
	cout << " ";
	for (int i = 0; i<n; i++)
	{
		cout << "-";
	}
}

/**首次输出蛇*/
void print_snake() 
{
	locate(snake[0].x, snake[0].y);
	cout << "@";
	for (int i = 1; i <= snake_length - 1; i++)
	{
		locate(snake[i].x, snake[i].y);
		cout << "*";
	}
}
/**随机生成并输出食物*/
bool print_food() {
	srand((unsigned)time(0));
	bool e;
	while (1) {
		e = true;
		int i = (int)random(0, 20) + 1, j = (int)random(0, 60) + 1;
		food.x = i; food.y = j;
		for (int k = 0; k <= snake_length - 1; k++)
		{
			if (food.x == snake[k].x&&food.y == snake[k].y)
			{
				e = false;
				break;
			}
		}
		if (e)
		{
			break;
		}
	}
	locate(food.x, food.y);
	cout << "$";
	return true;
}

void print_smileface() 
{
	locate(8, 64);
	cout << "  ********  " << endl;
	locate(9, 64);
	cout << "*          *" << endl;
	locate(10, 64);
	cout << "*  ^    ^  *" << endl;
	locate(11, 64);
	cout << "*          *" << endl;
	locate(12, 64);
	cout << "*    ˇ    *" << endl;
	locate(13, 64);
	cout << "  ********  " << endl;
	locate(14, 66);
	cout << "吃到了~" << endl;
}
void print_face()
{
	locate(8, 64);
	cout << "  ********  " << endl;
	locate(9, 64);
	cout << "*          *" << endl;
	locate(10, 64);
	cout << "*  *    *  *" << endl;
	locate(11, 64);
	cout << "*          *" << endl;
	locate(12, 64);
	cout << "*    *     *" << endl;
	locate(13, 64);
	cout << "  ********  " << endl;
	locate(14, 66);

	cout << "小心哦~" << endl;
}
#endif // !SNAKE_PRINTER
