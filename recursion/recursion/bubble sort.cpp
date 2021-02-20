#include<iostream>
#include<conio.h>
using namespace std;
void main()
{
	int arr[10],j=0,k=0;
	cout << "Enter the numbers" << endl;
	for (int i = 0; i < 10; i++)
	{
		cin >> arr[i];
	}
	int *ptr1 = new int[5];
	int *ptr2 = new int[5]; 
	for (int i = 0; i < 10; i++)
	{
		if (arr[i] % 2 == 0)
		{
			*(ptr1+j)=arr[i];
			j++;
		}
		else
		{
		   *(ptr2 + k)=arr[i];
		   k++;
		}
	}
	cout << "The evens are" << endl;
	for (int i = 0; i < 5; i++)
		cout << *(ptr1 + i)<<endl;
	cout << "The odds are" << endl;
	for (int i = 0; i < 5; i++)
		cout << *(ptr2 + i) << endl;
	
	_getch();
}