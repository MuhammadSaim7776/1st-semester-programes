#include<iostream>
#include<conio.h>
using namespace std;
void main()
{
	int i, j,s;
	for (i = 1; i<=5; i++)
	{
		for (j = 1; j<=6-i; j++)
		{
			cout << 6-j;
		}
		cout << endl;
	}
	_getch();
}