#include<iostream>
#include<conio.h>
#include<math.h>
using namespace std;
void main()
{
	int x,a;
	cout << "Enter the number " << endl;
	cin >> x;
	cout << "Enter the exponent"<< endl;
	cin >> a;
	cout << "The required number is" << pow(x, a) << endl;
	cout << "The sin of given number is" << sin(x) << endl;
	cout << "The cos of given number is" << cos(x) << endl;
	cout << "The tan of given number is" << tan(x) << endl;
	cout << "The square root of given number is" << sqrt(x) << endl;
	cout << "The log o given number is" << log(x) << endl;

	_getch();
}