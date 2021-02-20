#include<iostream>
#include<conio.h>
using namespace std;
void main()
{
	int i, j;
	for (i = 1; i <= 9; i++)
	{
		for (j = 1; j <= 5; j++)
		{
			if (i == 3 || j == 3||i==2&&(i+j)%2==0)
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