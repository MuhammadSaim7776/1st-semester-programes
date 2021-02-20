#include<iostream>
#include<conio.h>
using namespace std;
void main()
{
	char alphabet;
	for (alphabet = 'z'; alphabet >= 'a'; alphabet--)
	{
		if (alphabet == 'a' || alphabet == 'e' || alphabet == 'i' || alphabet == 'o' || alphabet == 'u')
		
			continue;
		
		cout << alphabet;

	}
	 _getch();
}
