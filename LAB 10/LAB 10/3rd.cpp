#include<iostream>
#include<conio.h>
using namespace std;
int comparearray(int*a, int*b)
{
	int i;
	for (i = 0; i < 5; i++)
	{
		if (*a+i == *b+i)
		{
			continue;
		}
		else if (*a+i>*b+i)
		{
			return 1;
		}
		else if (*a+i < *b+i)
		{
			return -1;
		}
	}
	return 0;
}
void main()
{
	int arr1[5];
	cout << "Enter 5 numbers of 1st array" << endl;
	for (int i = 0; i < 5; i++)
	{
		cin >> arr1[i];
	}
	int arr2[5];
	cout << "Enter 5 numbers in 2nd array" << endl;
	for (int i = 0; i < 5; i++)
	{
		cin >> arr2[i];
	}
	cout << "The return is"<<comparearray(arr1, arr2);
	_getch();
}
