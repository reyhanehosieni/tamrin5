
#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
	int i, j,n,m,num;
	cout << "enter n" << "enter m";
	cin >> n >> m;

	for (i = 1; i <= n; i++)
	{
		for (j = 1; j <= m; j++)
			num = i*j;
			cout << num << "\t";
		
	}
	system("pause");

	return 0;
}