// ENG
//The program throws two cubes until two six.How many attempts did the program do ?
// UKR
//�������� ���� ��� ������, ����  �� ������ �� ������.������ ����� ������� �������� ?

#include<iostream>
#include <time.h>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	srand(time(0));
	int cube1 = 0;
	int cube2 = 0;
	int c = 0;
	{

		for (; !((cube1 == 6) && (cube2 == 6)); )
		{
			++c;
			cube1 = 1 + rand() % 6;
			cube2 = 1 + rand() % 6;

			cout << "#" << c << " attempt :" << " Cube#1 = " << cube1 << " i" << " Cube#2 = " << cube2 << endl;
		}

			
		cout << "There were two sixs in an attempt #" << c << endl;
		system("pause");

			return 0;
		}
	}