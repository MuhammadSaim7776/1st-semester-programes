#include<iostream>
#include<conio.h>
using namespace std;
void main()
{
	int x, tax = 0, y = 0;
	cout << "Enter your salary" << endl;
	cin >> x;
	if (x > 30000)
	{
		tax = (x * 20) / 100;
		y = x - tax;
	}
	else if (x >= 20000 && x <= 30000)
	{
		tax = (x * 15) / 100;
		y = x - tax;
	}
	else if (x < 20000)
	{
		tax = (x * 10) / 100;
		y = x - tax;
	}
	cout << "Your salary is" << x;
	cout << endl;
	cout << "Your income tax is" << tax;
	cout << endl;
	cout << "Your net salary is" << y;
	_getch();
}