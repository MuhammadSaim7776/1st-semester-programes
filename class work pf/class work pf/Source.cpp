#include<iostream>
#include<conio.h>
using namespace std;
int addition(int a, int b)
{
	return a+b;
}
int subtraction(int a, int b)
{
	return a-b;
}
int multiplication(int a, int b)
{
	return a*b;
}
float division(int a, int b)
{
	return a/b;
}
float modulus(int a, int b)
{
	return a%b;
}
void main()
{
	int x, y;
	char z;

	cout << "Enter two numbers" << endl;
	cin >> x >> y;
	cout << "Choose the operation do you want to perform" << endl << "+,-,*,/,%"<<endl;
	cin >> z;
	switch (z)
	{
	case '+':
		cout << "The sum of given numbers is" << addition(x,y);
		break;
	case'-':
		cout << "The subtraction of two numbers is" <<subtraction(x,y);
		break;
	case'*':
		cout << "The multiplication of two numbers is" <<multiplication(x,y);
		break;
	case'/':
		cout << "The division of given numbers is" << division(x, y);
		break;
	case'%':
		cout << "The modulus of given numbers is" << modulus(x, y);
		break;
	}
	_getch();
}
