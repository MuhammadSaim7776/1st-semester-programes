#include<iostream>
#include<conio.h>
using namespace std;
void main()
{
	int arr[5];
	int *ptr = arr;
	cout << "Enter five numbers" << endl;
	cin >> *ptr >> *(ptr + 1) >> *(ptr + 2) >> *(ptr + 3) >> *(ptr + 4);
	cout << "Youe entered numbers are" << endl;
	for (int i = 4; i >= 0; i--)
	{
		cout << *(ptr + i) << endl;
	}
	_getch();
}