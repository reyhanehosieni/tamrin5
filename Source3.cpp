
#include<iostream>
#include<conio.h>
#include<stdio.h> 
using namespace std;
int main()
{
	int i = 0, word = 1, digit = 0, cha = 0;
	char str[100], ch;
	cout << "please enter a string:";
	cin >> str;
	while (true) {
		ch = str[i];
		if (ch == ' ')
			word++;
		else if (ch >= '0' && ch <= '9')
			digit++;
		else if (ch == '.' || ch == '\0')
			break;
		cha++;
		i++;
	};//end of while
	cout << "\n" << "word=" << word;
	cout << "\n\n" << "digit=" << digit;
	cout << "\n\n" << "character=" << cha;
	cout << "\n\n" << "press any key to exit...";
	system("pause");
	return 0;
}