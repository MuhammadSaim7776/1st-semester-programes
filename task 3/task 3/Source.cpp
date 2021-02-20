#include<iostream>
#include<conio.h>
using namespace std;
void main()
{
	float x, y,z, total;//x is obtained marks while y is total.
	cout << "enter obtained " << endl;
	
	cin >> x;
	cout << "enter total marks" << endl;
	cin >> y;
	z =( x / y) * 100;
	cout << "In Fundamental programming course, you have secured %:" << z;
	_getch();



}