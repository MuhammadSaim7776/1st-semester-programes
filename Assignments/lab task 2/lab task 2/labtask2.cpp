#include<iostream>
#include<conio.h>
using namespace std;
void main()
{
	int i, j;
	for (i = 1; i <= 7; i++)
	{
		for (j = i;j<=i*i;j=j+i)
		{
			cout << j << " ";
		}
		cout << endl<<endl;
	}
	_getch();
}