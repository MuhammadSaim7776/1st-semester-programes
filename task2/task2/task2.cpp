#include<iostream>
#include<conio.h>
using namespace std;
void main()
{
	int x, y, a, b, c;
	float d, e;

	cout << "enter two intergers" << endl;
	cin >> x;
	cin >> y;
	a = x + y;
	cout << "x  +  y =:" << a << endl;
	b = x - y;
	cout << "x  -  y =:" << b << endl;
	c = x*y;
	cout << "x  *  y =:" << c << endl;
	d = x / y;
	cout << "x  /  y =:" << d << endl;
	e = x % y;
	cout << "x  %  y = :" << e;
	_getch();
}
		
