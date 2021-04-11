#pragma once
#ifndef LOGO_H
#define LOGO_H
#include"stdc++.h"
void print_logo()
{
	cout << "**********   **       **        *        **           **********" << endl;
	cout << "**********   ***      **       ***       **      **   **********" << endl;
	cout << "**           ****     **      ** **      **    **     **        " << endl;
	cout << "**           ** **    **     **   **     **  **       **        " << endl;
	cout << "**********   **  **   **    **     **    ****         **********" << endl;
	cout << "**********   **   **  **    *********    ***          **********" << endl;
	cout << "        **   **    ** **    **     **    ** **        **        " << endl;
	cout << "        **   **     ****    **     **    **   **      **        " << endl;
	cout << "**********   **      ***   **       **   **     **    **********" << endl;
	cout << "**********   **       **  **         **  **       **  **********" << endl;
	for (int i = 1; i<65; i++) 
	{
		cout << "-";
	}
	cout << endl;
	cout << " * ** * " << endl;
	cout << "* .  . *" << endl;
	cout << "*      *" << endl;
	cout << "*   -  *" << endl;
	cout << " *    *     * *" << endl;
	cout << "   * *    * * * *        *" << endl;
	cout << "    * * * *    * * * * ** " << endl;
	cout << "     * * *       * * * *" << endl;
	cout << endl;
	locate(12, 30);
	cout << "游戏规则：按上下左右键控制蛇的移动" << endl;
	locate(13, 40);
	cout << "每吃掉一个食物身体长长一节" << endl;
	locate(14, 40);
	cout << "撞到墙或者自己的身体则游戏失败" << endl;
	locate(15, 40);
	cout << "我们的目标是变大变长！" << endl;
	locate(16, 40);
	cout << "请输入难度（1~100）开始游戏吧！" << endl;
	cout << endl;
}
#endif // !LOGO_H
