#include<iostream>
#include<conio.h>
using namespace std;
void main()
{
	float x, a, b, c, d;
	cout << "Enter distance in km" << endl;
	cin >> x;
	a = x * 1000;
	cout << "Distance in meters is:" << a << endl;
	b = x*3280.84;
	cout << "Distance in feet is:" << b << endl;
	c = x * 100000;
	cout << "Distance in cm is:" << c << endl;
	d = x*39370.1;
	cout << "Distance in inches is:" << d;
	_getch();
}