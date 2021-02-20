#include<iostream>
#include<conio.h>
using namespace std;
void main()
{
	char i,j;

	
	for (i = 'A'; i <= 'E'; i++)
	{
		for (j = 'A'; j <= i; j++)
		{
			cout << i;
		}
		cout << endl << endl;
	}
	_getch();
}