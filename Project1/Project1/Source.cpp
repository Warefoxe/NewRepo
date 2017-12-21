// ENG
//The program throws two cubes until two six.How many attempts did the program do ?
// UKR
//Програма кидає два кубики, доки  не випаде дві шістки.Скільки спроб зробила програма ?

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

			cout << "#" << c << " спроба :" << " Куб#1 = " << cube1 << " i" << " Куб#2 = " << cube2 << endl;
		}


		cout << "Випало дві шістки на спробi #" << c << endl;
		system("pause");

		return 0;
	}
}