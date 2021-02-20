#include<iostream>
#include<conio.h>
#include<fstream>
using namespace std;
void main()
{
	const int size = 10;
	int numbers[size];
	int number[size];
	cout << "Enter 10 numbers" << endl;
	for (int i = 0; i < size; i++)
	{
		cin >> numbers[i];
	}
	cout << "Writing into file....." << endl;
	fstream outputfile;
	outputfile.open("saim.txt",ios::out);
	for (int i = 0; i < size; i++)
	{
		outputfile << numbers[i] << endl;
	}
	cout << "Done" << endl;
	outputfile.close();
	cout << "OPening file again....\n";
	outputfile.open("saim.txt", ios::in);
	cout << "Reading contents\n";
	for (int i = 0; i < size; i++)
	{
		outputfile >> number[i];
		
	}
	outputfile.close();
	cout << "Read successfully\n contents are..\n";
	for (int i = 0; i < size; i++)
		cout << number[i] << endl;
	_getch();
}