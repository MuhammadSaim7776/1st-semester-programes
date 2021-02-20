#include<iostream>
#include<conio.h>
using namespace std;
void main()
{
	int max = 0;
	int arr[5];
	cout << "Ente 5 values in array" << endl;
	for (int i = 0; i < 5; i++)
	{
		cin >> arr[i];
	}
	for (int u = 0; u < 5; u++)
	{
		if (arr[u]>max)
		{
			max=arr[u];
		}
	}
	int *pointer = &max;
	cout << "The maximum number is:\n"<< *pointer;
	_getch();
}