﻿#include<iostream>
#include<conio.h>
using namespace std;
#define Enter  13
#define Escape 27

void main()
{
	setlocale(LC_ALL, "");
	char key;
	do
	{
		key = _getch();
		if (key == 'w' || key == 'W')
			cout << "Вперед" << endl;
		else if (key == 's' || key == 'S')
			cout << "Назад" << endl;
		else if (key == 'a' || key == 'A')
			cout << "Влево" << endl;
		else if (key == 'd' || key == 'D')
			cout << "Вправо" << endl;
		else if (key == ' ')
			cout << "Прыжок" << endl;
		else if (key == Enter)
			cout << "Огонь" << endl;
		else if (key == Escape)
			cout << "Выход" << endl;
		else
			cout << "Error" << endl;
	} while (key != Escape);
}