#include<iostream>
#include<conio.h>
using namespace std;
void main()
{
	float x, y, operation;
	char z;
	
	cout << "enter value of x" << endl;
	cin >> x;
	cout << "enter value of y" << endl;
	cin >> y;
	cout << "enter operation you want" << endl;
	cin >> z;
	if (z == '+')
	{
		operation = x + y;
		cout << "sum of two numbers is:" << operation;
	}
	if (z == '-')
	{
		operation = x - y;
		cout << "difference of two numbers is:" << operation;
	}
	if (z == '*')
	{ 
		operation = x*y;
		cout << "multiplication of two numbers is:" << operation;
	}
	if (z == '/')
	{
		operation = x / y;
		cout << "division of two numbers is:" << operation;
	}
	if (z == '%')
	{
		operation = (x + y) / 2;
		cout << "percentage of two numbers is:" << operation;
	}
	_getch();
}
