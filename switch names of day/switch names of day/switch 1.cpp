#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int x;
	cout << "Enter the no of day you want to konw the name" << endl;
	cin >> x;
	switch (x)
	{
	case 1:
		cout << "MONDAY" << endl;
		break;
	case 2:
		cout << "TUESDAY" << endl;
		break;
	case 3:
		cout << "WEDNESDAY" << endl;
		break;
	case 4:
		cout << "THRUSDAY" << endl;
		break;
	case 5:
		cout << "FRIDAY" << endl;
		break;
	case 6:
		cout << "SATURDAY" << endl;
		break;
	case 7:
		cout << "SUNDAY" << endl;
		break;
	default:
		cout << "invalid input" << endl;
		break;
	}
	_getch();
}

		
	
