#include<iostream>
#include<conio.h>
using namespace std;
void main()
{
	int x;
	cout << "press 1 if your % is 90 or above" << endl << "press 2 if your % is 80 or above " << endl << "press 3 if your % is 70 or above " << endl << "press 4 if your % is 60 or above" << endl << "press 5 if your % is 50 or above" << endl << "press 6 if your % is below 50" << endl;
	cin >> x;
	switch (x)
	{
	case 1:
		cout << "your grade is A+";
		break;
	case 2:
		cout << "your grade is A";
		break;
	case 3:
		cout << "your grade is B+";
		break;
	case 4:
		cout << "your grade is B";
		break;
	case 5:
		cout << "your grade is C";
		break;
	case 6:
		cout << "your grade is D";
		break;
	default:
		cout << "invalid input";
       
	}
	_getch();
}