#include<iostream>
#include<conio.h>
using namespace std;
void main()
{
	int x;
	cout << "enter your percentage      ";
	cin >> x;
	x = x / 10;
	switch (x)
	{
	case 9:
		cout << "Your grade is A";
		break;
	case 8:
		cout << " Your grade is B+";
		break;
	case 7:
		cout << "your grade is B";
		break;
	case 6:
		cout << "your grade is C";
		break;
	case 5:
		cout << "your grade is D";
		break;
	default:
		cout << "Your grade is F";
		break;
	}
	_getch();
}