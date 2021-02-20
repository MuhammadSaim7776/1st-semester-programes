//#include<iostream>
//#include<conio.h>
//using namespace std;
//void main()
//{
//	int arr[10], i, j, temp, size,swap;
//	cout << "Enter the size of array" << endl;
//	cin >> size;
//	cout << "Enter  numbers\n";
//	for (i = 0; i < size; i++)
//	{
//		cin >> arr[i];
//	}
//	for (i = 0; i < size - 1; i++)
//	{
//		swap = 0;
//		for (j = 0; j < (size - i) - 1; j++)
//		{
//			if (arr[j]>arr[j + 1])
//			{
//
//				temp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = temp;
//				swap = 1;
//			}
//		}
//		if (swap == 0)
//		{
//			break;
//		}
//		else
//		{
//			continue;
//		}
//	}
//	cout << "The sorted array is" << endl;
//	for (i = 0; i < size; i++)
//	{
//		cout << arr[i] << endl;
//	}
//	_getch();
//}