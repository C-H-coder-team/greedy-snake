#pragma once
#ifndef LOGO_H
#define LOGO_H
#include"stdc++.h"
void print_logo() {
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
	for (int i = 1; i<65; i++) {
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
	cout << "��Ϸ���򣺰��������Ҽ������ߵ��ƶ�" << endl;
	locate(13, 40);
	cout << "ÿ�Ե�һ��ʳ�����峤��һ��" << endl;
	locate(14, 40);
	cout << "ײ��ǽ�����Լ�����������Ϸʧ��" << endl;
	locate(15, 40);
	cout << "���ǵ�Ŀ���Ǳ��䳤��" << endl;
	locate(16, 40);
	cout << "�������Ѷȣ�1~100����ʼ��Ϸ�ɣ�" << endl;
	cout << endl;
}
#endif // !LOGO_H
