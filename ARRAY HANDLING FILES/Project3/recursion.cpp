#include<iostream>
#include<conio.h>
using namespace std;
void func(int *ptr)
{
	int smallest = 0;
	if (*(ptr + 1) < *ptr)
	{
		smallest = *ptr + 1;
		cout << smallest;
	}

}
void main()
{
	int arr[5];
	cout << "Enter 5 elements" << endl;
	for (int i = 0; i < 5; i++)
	{
		cin >> arr[i];
	}
	cout << "The smallest value is";
	func(arr);
	_getch();
}