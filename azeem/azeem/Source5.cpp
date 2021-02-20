#include<iostream>
#include<conio.h>
using namespace std;
void smallest(int *ptr, int size)
{
	int smallest = *ptr;
	for (int i = 1; i < size; i++)
	{
		if (*(ptr+i) < smallest)
		{
			smallest = ( *(ptr+i)) ;
		}
	}
	cout << "Smallest value is" << smallest<<endl;
		int greatest = *ptr;
		for (int i = 1; i < size; i++)
		{
			if (*(ptr + i) > greatest)
			{
				greatest = (*(ptr + i));
			}
		}
		cout << "Greatest value is" << greatest;
}
void main()
{
	const int size = 10;
	int arr[size];
	cout << "Enter values" << endl;
	for (int i = 0; i < size; i++)
	{
		cin >> arr[i];
	}
	smallest(arr, size);
	_getch();

}