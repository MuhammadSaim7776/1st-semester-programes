#include<iostream>
#include<conio.h>
using namespace std;
void main()
{
	int i, j;
	for (i = 0; i < 9; i++)
	{
		if (i == 0)
		{
			for (j = 1; j <= 13; j++)
			{
				if (j % 2 == 1)
				{
					cout << "*";
				}
				else
				{
					cout << " ";
				}
			}
		}
		else if (i % 2 == 1)
		{
			cout << " ";
		}
		else
		{
			for (j = 1; j <= 13; j++)
			{
				if (i==j&&i!=8||j+i==14&&i!=8)
				{
					cout << "*";
				}
				else if (i==8&&j==7)
				{
					cout << "*";
				}
				else
				{
					cout << " ";
				}
			
			}
		}
		cout << endl;
	}
	_getch();
}