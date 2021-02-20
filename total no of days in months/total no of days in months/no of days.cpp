#include<iostream>
#include<conio.h>
using namespace std;
void main()
{
	int Nameofmonth;
	cout << "Enter the number of month for which do you want to know the number of days" << endl;
	cin >> Nameofmonth;
	switch (Nameofmonth)
	{
	case 1:
		cout << "The name of month is January and there are 31 days in it\n";
		break;
	case 2:
		cout << "The name of month is Feburary and there are 28 days in it\n";
		break;
	case 3:
		cout << "The name of month is March and there are 31 days in it\n";
		break;
	case 4:
		cout << "The name of month is April and there are 30 days in it\n";
		break;
	case 5:
		cout << "The name of month is May and there are 31 days in  it\n";
		break;
	case 6:
		cout << "The name of month is June and there are 30 days in  it\n";
		break;
	case 7:
		cout << "The name of month is July and there are 31 days in  it\n";
		break;
	case 8:
		cout << "The name of month is August and there are 31 days in  it\n";
		break;
	case 9:
		cout << "The name of month is September and there are 30 days in  it\n";
		break;
	case 10:
		cout << "The name of month is October and there are 31 days in  it\n";
		break;
	case 11:
		cout << "The name of month is November and there are 30 days in  it\n";
		break;
	case 12:
		cout << "The name of month is December and there are 31 days in  it\n";
		break;
	default:
		cout << "There are only 12 months in a year and you have entered beyond this limit\n";
		break;
	}
	_getch();
		

		
}