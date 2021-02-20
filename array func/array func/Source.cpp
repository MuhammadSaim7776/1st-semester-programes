#include<iostream>
#include<conio.h>
using namespace std;
int sum(int*ptr, int size)
{
	int sum = 0;
	for (int i = 0; i < size; i++)
	{
		sum += *(ptr + i);
	}
	return sum;
}
void main()
{
	int arr[5];
	cout << "Enter 5 elements" << endl;
	for (int i = 0; i < 5; i++)
	{
		cin >> arr[i];
	}
	cout << "The sum of array element is" << sum(arr, 5);
	_getch();
}