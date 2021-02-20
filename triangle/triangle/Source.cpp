#include<iostream>
#include<conio.h>
using namespace std;
void main()
{
	float i, j;
	for (i = 5; i >=1; i--)
	{
		for (j = 1; j <= 9; j++)
		{
			if (i == 1 || j == i||(i+j)/2==5)
			{
				cout << "&";
			
			}
			else
			{
				cout << " ";
			}
		}
		cout << endl;
	}
	_getch();
}