#include<iostream>
#include <conio.h>

#include <random>
#include <time.h>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	int a = 1;
	int b = 1;

	{

		for (int c(0); c <= 5; c++) {

			system("cls");
			srand(time(NULL));
			a = rand() % 6;
			cout << "1 ������ ������ : " << a << endl;
			b = rand() % 6;
			cout << "1 ������ ������ : " << b << endl;

			if (a > b) {
				cout << "������ 1 �����, ��� ������: " << a << " ������ 2 ������ : " << b << endl;
			}
			else { cout << "������ 2 �����, ��� ������: " << a << " ������ 2 ������ : " << b << endl; }
			system("pause");


			return 0;
		}
	}