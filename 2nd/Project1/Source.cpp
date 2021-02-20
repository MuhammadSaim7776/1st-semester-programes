#include<iostream>
#include<conio.h>
using namespace std;
void main()
{
	int x, y, z;
	cout << "Enter three numbers\n";
	cin >> x;
	cin >> y;
	cin >> z;
	if (x >= y)
	{
		if (x > z)
			cout << "x is greater";
		else if (x < z)
			cout << "z is greater";
		else if (x == z)
			cout << "x is equal to z";
	}
	if (y >= x)
	{
		if (y>z)
			cout << "y is greater";
		else if (y < z)
			cout << "z is greater";
		else if (y == z)
			cout << "y is equal to z";
	}
	if (x == z)
	{
		if (x>z)
			cout << "x is greater";
		else if (x < z)
			cout << "z is greater";
		else if (x == z)
			cout << "x is equal to z";
	}
	_getch();
}

	


