#include<iostream>
#include<conio.h>
#include<fstream>
#include<iomanip>
using namespace std;
void main()
{
	int const rows = 3;
	int const col = 3;
	int nums[rows][col];
	cout << "Enter 9 numbers in 2D array";
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < col; j++)
		{
			cin >> nums[i][j];
		}
	}
	cout << "opening file......\n"<<"writing data\n";
	fstream numlist("saim.txt", ios::out|ios::app);
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < col; j++)
		{ 
			numlist << setw(8) << nums[i][j];
		}
		numlist << endl;
	}
	numlist.close();
	cout << "done";
	_getch();
}