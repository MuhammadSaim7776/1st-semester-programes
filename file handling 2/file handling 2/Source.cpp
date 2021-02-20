#include<iostream>
#include<conio.h>
#include<fstream>
using namespace std;
void main()
{
	int a,b;
	ifstream outfile("saim.txt");
	outfile >> a>>b;
	outfile.close();
	cout << a<<endl<<b;

	_getch();

}