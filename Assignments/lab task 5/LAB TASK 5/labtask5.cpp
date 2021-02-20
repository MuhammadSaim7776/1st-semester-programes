#include<iostream>
#include<conio.h>
using namespace std;
void main()
{
	int no[5],i,sum=0,average=0;
	cout << "Enter five numbers" << endl;
	for (i = 0; i < 5; i++)
	{
		cin >> no[i];
	}
	cout << "Your entered numbers are" << endl;
	for (i = 0; i < 5; i++)
	{
		cout << no[i] << "\t";
		sum=sum+no[i];
	}
	cout << endl << "The sum of your entered numbers is" << sum;
	average = sum / 5;
	cout <<endl<< "The average of your entered numbers is:" << average;
	_getch();
}