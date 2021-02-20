#include<iostream>
#include<conio.h>
using namespace std;
float quotient(int x, int y)
{
	float z;
	z = x / y;
	return z;
}
float remainder(int x, int y)
{
	float z;
	z = x%y;
	return z;
}
void main()
{
	int x, y;
	cout << "Enter two numbers" << endl;
	cin >> x >> y;
	cout << "The qoutient of two numbers is" << quotient(x, y) << endl;
	cout << "The remainder of two numbers is" << remainder(x, y) << endl;
	_getch();

}