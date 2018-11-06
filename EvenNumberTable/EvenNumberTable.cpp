// EvenNumberTable.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include"iostream"
using namespace std;

int main()
{
	int first, second;
	cout << "Enter the Two Inputs  " << endl;
	cout << "First Number : ";
	cin >> first;
	cout << "Second Number : ";
	cin >> second;
	cout << endl;
	for (int i = first; i <= second; i++)
	{
		if (i % 2 == 0)
		{
			for (int j = 1; j <= 5; j++)
			{
				cout << i << "*" << j << "=" << i*j << endl<<endl;
			}
			cout << "_______________________________" << endl << endl;
		}
	}
	return 0;
}
