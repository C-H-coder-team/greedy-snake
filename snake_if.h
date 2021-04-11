#pragma once
#ifndef SNAKE_IF_H
#define SNAKE_IF_H
#include"stdc++.h"
#include"snake_start.h"  
#include"logo.h"
#include"snake_printer.h"

/**�ж���ײ�Լ�ײǽ*/
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
/**ǰ��*/
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
	/*����Ե�ʳ����*/
	if (snake[0].x == food.x&&snake[0].y == food.y)
	{
		snake_length++;
		e = true;
		snake[snake_length - 1] = temp;
	}
	/*�����ʱ�ߵ�״̬*/
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
	/*�����ײ����ײǽ��*/
	if (is_correct() == false) 
	{
		system("cls");
		cout << "������" << endl;
		cout << "���ճ����ǣ�" << snake_length<<endl;
		return false;
	}
	return true;
}

#endif // !SNAKE_IF_H
