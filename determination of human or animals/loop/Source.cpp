#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int x;
	cout << "How many legs you have" << endl;
	cin >> x;
	switch (x)
	{
	case 2:
		cout << "You are a human being" << endl;
		break;
	case 4:
		cout << "You are animal" << endl;
		break;
	default:
		cout << "I dont know what you are" << endl;
		break;

	}
	_getch();

}