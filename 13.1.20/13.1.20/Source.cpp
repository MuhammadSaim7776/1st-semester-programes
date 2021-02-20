#include<iostream>
#include<conio.h>
using namespace std;
double power(double a, int b)
{
	 int pow = 1;
	for (int c = 1; c <= b; c++)
	{
		pow=pow*a;
	}
	return pow;
}
double power(float a, int b)
{
	int pow = 1;
	for (int c = 1; c <= b; c++)
	{
		pow = pow*a;
	}
	return pow;
}
void main()
{
	float x,y;
	cout << "Enter the number" << endl;
	cin >> x;
	cout << "Enter the power you want to calculate" << endl;
	cin >> y;
	cout <<"The required number is"<< power(x, y);
	_getch();
}
