#include<iostream>
#include<conio.h>
using namespace std;
void main()
{
	int i, j;
	for (i = 1; i <= 9; i++)
	{
		for (j = 1; j <= 7; j++)
		{
			if (i >= 3 && i <= 7)
			{
				if (j == 1 || j == 7)
				{
					cout << "*";
				}
				else
				{
					cout << " ";
				}
			}
			else if ((j-i)%2==0)
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