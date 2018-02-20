#include <stdlib.h>
#include <iostream>
#include <conio.h>

using namespace std;

void task1 ()
{
	cout << "Hello World\n";

	int a;
	a = 5;
	int b = 3;

	cout << "���������� � = " << a << "\n";
	cout << "���������� b = " << b << "\n";
	cout << "����� a � b = " << a + b << "\n";
}
void task2()
{
	int a = 5;
	int b = 3;
	float z = 5.0;
	float y = 3.0;

	cout << "���������� ���������� Float: " << z / y << "\n";
	cout << "������� ������������� ����������: " << a / b << "\n";
}
void task3()
{
	int a, b;

	cout << "---��������� ��� �������������� ������������---" << "\n";
	cout << "\n������� ������ ������������� ��������: ";
	cin >> a;
	cout << "������� ������ ������������� ��������: ";
	cin >> b;
	cout << "����� " << a << " � " << b << " = " << a + b << "\n";
}
void task4()
{
	int value;
	int* pointer;
	int anotherValue;
	value = 5;
	pointer = &value;
	anotherValue = *pointer;
	cout << "��������, ����������� � ���������: " << anotherValue << "\n";
	cout << "����� � ���������: " << pointer << "\n";
	cout << "�������� � ���������: " << *pointer << "\n";
}
void task5()
{
	int a;

	cout << "������� �������� ��� �������� �� ������ / ��������: ";
	cin >> a;

	if (a % 2 == 0)
	{
		cout << "�������� " << a << " ������" << "\n";
	}
	else
	{
		cout << "�������� " << a << " ��������" << "\n";
	}
}
void task6()
{
	int a;

	cout << "������� �������� ��� �������� �� ���������: ";
	cin >> a;

	if ((a % 2 == 0) && (a % 5 == 0))
	{
		cout << "�������� " << a << " ������ 2 � 5" << "\n";
	}
	else if (a % 5 == 0)
	{
		cout << "�������� " << a << " ������ 5" << "\n";
	}
	else if (a % 2 == 0)
	{
		cout << "�������� " << a << " ������ 2" << "\n";
	}

	else
	{
		cout << "�������� " << a << " �������� �� 2, �� 5" << "\n";
	}
}
void task7()
{
	int a = 0;

	while (a <= 5)
	{
		cout << "�������� ���������� ������ = " << a << "\n";
		a++;
	}
}
void task8()
{
	int a = 0;

	do
	{
		cout << "�������� ���������� ������ = " << a << "\n";
		a++;
	} while (a <= 5);
}
void task9()
{
	int a = 10;

	for (int i = 0; i < 10; i++)
	{
		cout << "�������� " << i << "\n";
	}

	cout << "\n\n";

	for (int i = 0; i < a; i++)
	{
		a--;
		cout << "�������� " << i << "; �������� = " << a << "\n";
	}
}
void task10()
{
	int a = 10;

	for (int i = 0; i < 10; i++)
	{
		a--;
		if (i >= a)
		{
			cout << "i ������ ��� ���� �! \n������ �����\n";
			break;
		}
	}
	cout << "a = " << a << "\n";
}
void task11()
{
	int a = 5;
	int b = 3;
	float z;

	z = a;
	cout << "�������� z = " << z << "\n";

	//a = z; ������!

	a = (int)z;
	cout << "�������� � = " << a << "\n";
	z = a / b;
	cout << "�������� z = " << z << "\n";
	z = ((float)a) / b;
	cout << "�������� z = " << z << "\n";
}
void launchTask1()
{
	setlocale(0, "");

	int ascii = 0;
	char key;

	while (ascii != 27)
	{
		system("cls");

		cout << "�������... \n";
		cout << "'0' - ������� �� ����� 'Helloy World' � �������� ������������� ����������; \n";
		cout << "'1' - ������� ���������� ������� ���� ������������� � ������������ ����������; \n";
		cout << "'2' - ��������� ������ ���� ������������� ���������� � ���������� � ����� �� �����; \n";
		cout << "'3' - �������  �� ����� �����, �������� � ��������� � ��������, ������� �������� �� ������� ������; \n";
		cout << "'4' - �������� ����� �� �������� � ����������; \n";
		cout << "'5' - ���������� ��������� ���������� ����� 5 ��� 2; \n";
		cout << "'6' - ���� � ����-��������; \n";
		cout << "'7' - ���� � ����-��������; \n";
		cout << "'8' - ������������ ����; \n";
		cout << "'9' - �������� break ��� ���������� ���������� ������ �����; \n";
		cout << "'a' - ����� � ������� �������������� ����� ������; \n";
		cout << "������� Esc ��� ������. \n\n";

		key = _getch();
		ascii = key;

		switch (ascii)
		{
		case '0':
			task1();
			system("pause");
			break;
		case '1':
			task2();
			system("pause");
			break;
		case '2':
			task3();
			system("pause");
			break;
		case '3':
			task4();
			system("pause");
			break;
		case '4':
			task5();
			system("pause");
			break;
		case '5':
			task6();
			system("pause");
			break;
		case '6':
			task7();
			system("pause");
			break;
		case '7':
			task8();
			system("pause");
			break;
		case '8':
			task9();
			system("pause");
			break;
		case '9':
			task10();
			system("pause");
			break;
		case 'a':
			task11();
			system("pause");
			break;
		}
	}
}