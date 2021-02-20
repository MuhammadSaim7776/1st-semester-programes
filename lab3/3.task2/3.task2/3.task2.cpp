#include<iostream>
#include<conio.h>
using namespace std;
void main()
{
	char  alphabet;
	cout << "enter alphabet" << endl;
	cin >> alphabet;
	
	if (alphabet == 'a' || alphabet == 'A' || alphabet == 'e' || alphabet == 'E' || alphabet == 'i' || alphabet == 'I' || alphabet == 'o' || alphabet == 'O' || alphabet == 'u' || alphabet == 'U')
		cout << "entered alphabet is a vowel" << endl;
	else
		cout << "entered alphabet is consonent";
	_getch();

}