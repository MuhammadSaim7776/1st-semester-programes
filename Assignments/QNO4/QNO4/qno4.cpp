#include<iostream>
#include<conio.h>
using namespace std;
void main()
{
	int i, j, s;
	for (i = 0; i <= 9; i=i+2)
	{
		for (s = 0; s <i; s++)
		{
			cout << " ";
		}
		for (j = 0; j <9-i; j++)
		{
			cout << "* "; 
		}
		cout << endl << endl;
	}
	_getch();
}