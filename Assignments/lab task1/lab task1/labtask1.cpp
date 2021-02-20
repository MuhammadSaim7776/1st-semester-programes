#include<iostream>
#include<conio.h>
using namespace std;
void main()
{
	int i, j;
	for (i = 1; i<=5; i++)
	{
		for (j = 6-i; j>=1 ; j--)
		{
			cout << j;
			
		}
		cout << endl;
	}
	_getch();
}