#include<iostream>
#include<conio.h>
using namespace std;
void main()
{
	char ascii;
	for (ascii = 0;ascii>=0&&ascii<=127; ascii++)
	{
		if (ascii % 16 == 0)
		{
			cout << endl;
		}
		cout << ascii;
		
	}
	_getch();


}