#include<iostream>
#include<conio.h>
using namespace std;
void main()
{
	int x, y, z, MAX2;
	cout << "Enter three numbers\n";
		cin >> x;
		cin >> y;
		cin >> z;
		if (x > y&&x > z)
			MAX2 = x;
		else if (y > z)
			MAX2 = y;
		else
			MAX2 = z;
		cout << MAX2;
		_getch();

}