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
			cout << "1 игроку выпало : " << a << endl;
			b = rand() % 6;
			cout << "1 игроку выпало : " << b << endl;

			if (a > b) {
				cout << "выграл 1 игрок, ему выпало: " << a << " игроку 2 выпало : " << b << endl;
			}
			else { cout << "выграл 2 игрок, ему выпало: " << a << " игроку 2 выпало : " << b << endl; }
			system("pause");


			return 0;
		}
	}