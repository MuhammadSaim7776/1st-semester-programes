#include<iostream>
#include<conio.h>
using namespace std;
void main()
{
	int arr[20], i, j, temp, size,loc, min;
	cout << "Enter the size of array" << endl;
	cin >> size;
	cout << "Enter  numbers\n";
	for (i = 0; i < size; i++)
	{
		cin >> arr[i];
	}
	for (i = 0; i < (size-1); i++)
	{
		loc = i;
		for (j = i + 1; j < size; j++)
		{
			if (arr[loc]>arr[j]);
			{
				loc = j;
			}
		}
		temp = arr[loc];
		arr[loc] = arr[i];
		arr[i] = temp;
	}
	cout << "Sorted array is" << endl;
	for (i = 0; i < (size); i++)
	{
		cout << arr[i] << endl;
	}
	_getch();
}