#include<iostream>
#include<conio.h>
using namespace std;
void main()
{
	int i, j;
	for (i = 0; i < 7; i++)
	{
		for (j = 0; j <= i; j++)
		{
			cout << "*";
		}
		cout << endl<<endl;
	}
	for (i = 0; i < 7; i++)
	{
		for (j = 0; j < 7 - i; j++)
		{
			cout << "*";
		}
		cout << endl<<endl;
	}
	_getch();
}