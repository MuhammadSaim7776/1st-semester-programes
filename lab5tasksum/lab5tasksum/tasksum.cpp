#include<iostream>
#include<conio.h>
using namespace std;
void main()
{
	float x;
	float sum;
	sum = 0;
	for (x = 1; x <= 45; x++)
	{
		sum = sum + 1 / x;
		
	}
	cout << sum;
	_getch();
}