#include<iostream>
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
			cout << "������" << endl;
		else if (key == 's' || key == 'S')
			cout << "�����" << endl;
		else if (key == 'a' || key == 'A')
			cout << "�����" << endl;
		else if (key == 'd' || key == 'D')
			cout << "������" << endl;
		else if (key == ' ')
			cout << "������" << endl;
		else if (key == Enter)
			cout << "�����" << endl;
		else if (key == Escape)
			cout << "�����" << endl;
		else
			cout << "Error" << endl;
	} while (key != Escape);
}