// NonPrimeNumTable.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include"iostream"
using namespace std;
bool IsPrime(int input)
{
	int flag;
	flag = 0;
	for (int j = 2; j <= (input / 2); j++)
	{
		if (input%j == 0)
		{
			flag = 1;
			break;
		}
		else
		{
			flag = 0;
		}
	}
	if (flag != 0)
	{
		return false;
	}
	else
	{
		return true;
	}
}
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
		if (IsPrime(i) == false)
		{
			for (int j = 1; j <= 5; j++)
			{
				cout << i << "*" << j << "=" << i*j << endl << endl;
			}
			cout << "___________________________" << endl << endl;
		}
	}
	return 0;
}


