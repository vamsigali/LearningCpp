// AscendingOrder.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include"iostream"
using namespace std;

int main()
{
	int first, second, third,temp;
	cout << "Enter the Three Inputs "<<endl;
	cout << "Enter First Integer : ";
	cin >> first;
	cout << "Enter Second Integer : ";
	cin >> second;
	cout << "Enter Third Integer :" ;
	cin >> third;
	for (int i = 0; i < 2; i++)
	{
		if (first > second)
		{
			temp = first;
			first = second;
			second = temp;
		}
		if (second > third)
		{
			temp = second;
			second = third;
			third = temp;
		}
	}
	cout << "Numbers in Ascending order are : " << first << " " << " " << second << " " << third << endl;

    return 0;
}

