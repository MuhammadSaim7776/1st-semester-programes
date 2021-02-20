#include<iostream>
#include<conio.h>
using namespace std;
void main()
{
	int x,y,z;
	
	
	
	
	cout << "Enter value of x:" << endl;
	cin >> x;
	cout << "Enter value of y:" << endl;
	cin >> y;
	cout << "Press 1 for addition" << endl << "press 2 for subtraction" << endl << "press 3 for multiplication" << endl << "press 4 for division" << endl << "press 5 for modulus" << endl;
	cin >> z;
	switch (z)
	{
	case 1:
		z = x + y;
		cout << "The sum of two numbers is:"<<z;
		break;
	case 2:
		z = x - y;
		cout << "The subtraction of two numbers is:"<<z;
		
		break;
	case 3:
	 z=x*y;
		cout << "The multiplication of two numbers is:"<<z;
		break;
	case 4:
		z = x / y;
		cout << "The division of two numbers is:"<<z;
		break;
	case 5:
		z = x%y;
		cout << "The modulus of two numbers is:"<<z;
		break;
	default:
		cout << "invalid input";
		break;
	}
	_getch();

	

}