#include<iostream>
#include<conio.h>
using namespace std;
void main()
{
	int x;
	cout << "Enter the number of rows or coloumns for which do you want to draw a diamond" << endl << "Remember that entered number should be an odd number" << endl;
	cin >> x;
	int b = x - 1,c=2,d=0;
	for (int i = 0; i < x; i++)
	{
		if (i <= x / 2)
		{
			for (int s = 0; s < (x / 2) - i; s++)
			{
				cout << " ";
			}
			for (int j = 0; j < x - b&&x - b >= 0; j++)
			{
				cout << "*";
			}
			b = b - 2;
		}
		else
		{
			for (int s =0 ; s<=d; s++)
			{
				cout << " ";
			}
			d += 1;
			for (int j = 0; j < x - c&&x - c>= 0; j++)
			{
				cout << "*";
			}
			c += 2;
		}
		cout << endl;
	}
	_getch();
}