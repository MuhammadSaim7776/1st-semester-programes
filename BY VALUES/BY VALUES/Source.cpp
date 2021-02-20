#include<iostream>
#include<conio.h>
using namespace std;
double soha(int a);
{
	int c;
	c = sin(a);
	return c;
}
void main()
{
	int x,z;
	cin >> x;
	z = soha(x);
	cout << z;
	_getch();
}