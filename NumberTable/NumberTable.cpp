// NumberTable.cpp : Defines the entry point for the console application.
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
	for (int i = first; i <= second; i++)
	{
		for (int j = 1; j <= 5; j++)
		{
			cout << i << "*" << j << "=" << i*j << endl<<endl;
		}
		cout << "_______________________________"<<endl<<endl;
	}
    return 0;
}

