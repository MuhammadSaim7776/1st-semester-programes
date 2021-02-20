#include<iostream>
#include<conio.h>
using namespace std;
void main()
{
	int x,i;
	int sumofodds, sumofevens;
	sumofodds = 0;
	sumofevens = 0;
	cout << "Enter end value" << endl;
	cin >> x;
	for (i = 0; i <= x; i++)
	{
		if (i % 2 == 0)
		{
			sumofevens = i + sumofevens;
		}
		else
		
			sumofodds = i + sumofodds;
		
	}
		cout << "sum of even numbers is" << sumofevens;
		cout << "sum of odd numbers is" << sumofodds;
		_getch();
	}
