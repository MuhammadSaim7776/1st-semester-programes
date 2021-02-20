//#include<iostream>
//#include<conio.h>
//using namespace std;
//int fictorial(int x)
//{
//	int z=1;
//	for (x; x > 1;x--)
//	{
//		z *= x;
//	}
//	return z;
//}
//void main()
//{
//	int a;
//	cin >> a;
//	cout << fictorial(a);
//	_getch();
//



#include<iostream>
#include<conio.h>
using namespace std;
int fictorial(int x)
{
	if (x <= 1)
		return 1;
	else
		return n*fact(x - 1);
}
void main()
{
	int a;
	cin >> a;
	cout << fictorial(a);
	_getch();
}