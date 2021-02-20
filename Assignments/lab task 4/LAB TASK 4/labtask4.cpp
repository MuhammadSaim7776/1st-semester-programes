#include<iostream>
#include<conio.h>
using namespace std;
void main()
{
	int no[5], i;
	cout << "Enter five numbers" << endl;
	for (i = 0; i < 5; i++)
	{
		cin >> no[i];
	}
	cout << "Your entered numbers are" << endl;
	for (i = 0; i < 5; i++)
	{
		cout << no[i]<<"\t";
	}
	_getch();
}