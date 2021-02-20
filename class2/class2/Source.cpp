#include<iostream>
#include<conio.h>
using namespace std;
void main()
{

	char i, j;
	int N = 10;
	for (i = N; i >= 0; i--)
	{
		for (j = 0; j <= i; j++)
		{
			cout << "*";
		}
		cout << "\n";
	}
	_getch();
}