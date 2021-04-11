#pragma once
#ifndef SNAKE_IF_H
#define SNAKE_IF_H
#include"stdc++.h"
#include"snake_start.h"  
#include"logo.h"
#include"snake_printer.h"

/**判断自撞以及撞墙*/
bool is_correct()
{
	if (snake[0].x == 0 || snake[0].y == 0 || snake[0].x == 21 || snake[0].y == 61)
	{
		return false;
	}
	for (int i = 1; i <= snake_length - 1; i++) {
		if (snake[0].x == snake[i].x&&snake[0].y == snake[i].y)
		{
			return false;
		}
	}
	return true;
}
/**前进*/
bool go_ahead() {
	node temp;
	temp = snake[snake_length - 1];
	bool e = false;
	for (int i = snake_length - 1; i >= 1; i--) 
	{
		snake[i] = snake[i - 1];
	}
	snake[0].x = snake[0].x + direct[dir][0];
	snake[0].y = snake[0].y + direct[dir][1];
	locate(snake[1].x, snake[1].y);
	cout << "*";
	/*如果吃到食物了*/
	if (snake[0].x == food.x&&snake[0].y == food.y)
	{
		snake_length++;
		e = true;
		snake[snake_length - 1] = temp;
	}
	/*输出此时蛇的状态*/
	if (!e) 
	{
		locate(temp.x, temp.y);
		cout << " ";
		print_face();
	}
	else 
	{
		print_food();
		print_smileface();
	}
	locate(snake[0].x, snake[0].y);
	cout << "@";
	/*如果自撞或者撞墙了*/
	if (is_correct() == false) 
	{
		system("cls");
		cout << "你输了" << endl;
		cout << "最终长度是：" << snake_length<<endl;
		return false;
	}
	return true;
}

#endif // !SNAKE_IF_H
