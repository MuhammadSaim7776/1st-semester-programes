#include<iostream>
#include<conio.h>
using namespace std;
void main()
{
	int i, j;
	for (i = 1; i < 6; i++)
	{
		for (j = 1; j <= 6-i; j++)
		{
			cout << j  << " ";
		}
		cout << endl << endl;
	}
	_getch();
}