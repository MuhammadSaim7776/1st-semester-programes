#include<iostream>
#include<conio.h>
#include<math.h>
using namespace std;
double power(int x, int y)
{
	return pow(x, y);
}
void main()
{
	double a,b;
	cout << "Enter number and exponent" << endl;
	cin >> a >> b;
	cout << power(a, b);
	_getch();
}