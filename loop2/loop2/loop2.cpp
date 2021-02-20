#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int num;
	cout << "ENTER NUMBER FROM WHICH DO YOU WANT TO START COUNTING IN DESENDING ORDER UNTILL 0:" << endl;
	cin >> num;
	cout << num << ",";
	while (num >= 1)
    {
		num = num - 1;
		cout << num << ",";
	}
	_getch();
}