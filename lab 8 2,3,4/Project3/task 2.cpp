/*#include<iostream>
#include<conio.h>
using namespace std;
void shape1()
{
	int i, j;
	for (i = 0; i < 10; i++)
	{
		for (j = 0; j <= i; j++)
		{
			cout << "*";
		}
		cout << endl;
	}
}
void shape2()
{
	int i, j;
	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10 - i; j++)
		{
			cout << "*";
		}
		cout << endl;
	}
}
void shape3()
{
	int i, j, s;
	for (i = 0; i < 10; i++)
	{
		for (s = 0; s < i; s++)
		{
			cout << " ";
		}
		for (j = 0; j < 10 - i; j++)
		{
			cout << "*";
		}
		cout << endl;
	}
}
void shape4()
{
	int i, j,s;
	for (i = 0; i < 10; i++)
	{
		for (s = 0; s < 9 - i; s++)
		{
			cout << " ";
		}
		for (j = 0; j <= i; j++)
		{
			cout << "*";
		}
		cout << endl;
	}
}
void pick(int &x)
{
	if (x == 1)
	{
		shape1();
	}
	else if (x == 2)
	{
		shape2();
	}
	else if (x == 3)
	{
		shape3();
	}
	else if (x == 4)
	{
		shape4();
	}
	else
	{
		cout << "You have not entered right number";
	}
}
void main()
{
	int c;
	cout << "Enter the number of shape you want to draw" << endl << "You can choose numbers between 1and 4 only" << endl;
	cin >> c;
	pick(c);
	_getch();
}*/