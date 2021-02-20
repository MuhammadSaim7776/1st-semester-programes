#include<iostream>
#include<conio.h>
using namespace std;
void main()
{
	int i, j;
	for (i = 1; i <= 9; i++)
	{
		for (j = 1; j <=9; j++)
		{
			if (i + j == 6||j-4==i||i-j==4||i+j==14)
			{
				cout << "*";
			}
			else
			{
				cout << " ";
			}

		}
		cout << endl;
	}
	_getch();
}