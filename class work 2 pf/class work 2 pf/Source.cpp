#include<iostream>
#include<conio.h>
using namespace std;
char calculategrade(int x)
{
	if (x >= 90)
	{
		return 'A';
	}
	else if (x >= 80&&x<90)
	{
		return'B';
	}
	else if (x >= 60 && x < 80)
	{
		return 'C';
	}
	else
	{
		return 'D';
	}
}
void main()
{
	int a;
	char z;
	cout << "Enter your marks out of 100" << endl;
	cin >> a;
	z = calculategrade(a);
	cout <<"Your grade is"<< z;
	_getch();
}
