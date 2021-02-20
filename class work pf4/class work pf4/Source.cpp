#include<iostream>
#include<conio.h>
using namespace std;
int reverse(int x)
{
	int reverse=0,remainder;
	while (x != 0)
	{
		remainder = x % 10;
		reverse = reverse * 10 + remainder;
		x = x / 10;
	}
	return reverse;

}
void main()
{
	int a;
	cout << "Enter a number" << endl;
	cin >> a;
	cout << "The reverse of given number is" << reverse(a);
	_getch();
	
}