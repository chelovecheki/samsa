#include "stdafx.h"
#include "lab1.h"
#include "lab2.h"
#include "lab3.h"
#include <Windows.h>

using namespace std;

int main()
{
	SetConsoleCP(1251);// установка кодовой страницы win-cp 1251 в поток ввода
	SetConsoleOutputCP(1251); // установка кодовой страницы win-cp 1251 в поток вывода

	int ascii = 0;
	char key;

	while (ascii != 27)
	{
		system("cls");
		cout << "Нажмите... \n";
		cout << "'1' - Лабораторная работа №1;\n";
		cout << "'2' - Лабораторная работа №2;\n";
		cout << "'3' - Лабораторная работа №3;\n";
		cout << "Нажмите Esc для выхода из программы\n\n";

		key = _getch();
		ascii = key;

		switch (ascii)
		{
		case '1':
			LauncherLab1();
			break;
		case '2':
			LauncherLab2();
			break;
		case '3':
			LauncherLab3();
			break;

			return 0;
		}
	}
}

