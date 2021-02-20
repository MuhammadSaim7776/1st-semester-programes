#include<iostream>
#include<conio.h>
using namespace std;
void main()
{
	int x;
	cout << "Enter the number of books you purchased" << endl;
	cin >> x;
	switch (x)
	{
	case 0:
		cout << "You have earned 0 points";
		break;
	case 1:
		cout << "You have earned 5 points";
		break;
	case 2:
		cout << "You have earned 15 points";
		break;
	case 3:
		cout << "You have earned 30 points";
		break;
	default:
		cout << "you have earned 60 points";
		break;
	}
	_getch();
}