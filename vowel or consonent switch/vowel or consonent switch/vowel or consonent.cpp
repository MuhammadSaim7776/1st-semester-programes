#include<iostream>
#include<conio.h>
using namespace std;
int  main()
{
	char vowels;
	cout << "Enter alphabet you want to check" << endl;
	cin >> vowels;
	vowels= (vowels=='a' || vowels == 'e' || vowels == 'i' || vowels == 'o' || vowels == 'u' || vowels == 'A' || vowels == 'E' || vowels == 'I' || vowels == 'O' || vowels == 'U');
	
	switch (vowels)
	{
	case 1:
		cout << "entered alphabet is vowel\n";
		break;
	default:
		cout << "Entered alphabet is consonent\n";
		break;
	
	}
	_getch();
	
}