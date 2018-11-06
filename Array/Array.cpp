// Array.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream"
using namespace std;


int main()
{
	int array[4];
	cout << "Enter the 10 integers : ";
	for (int i = 0; i <= 4; i++)
	{
		cin >> array[i];
	}
	cout << endl<<"The integers entered are  : ";
	for (int i = 0; i <= 4; i++)
	{
		cout<< array[i]<<" ";

	}
	cout << endl<<	sizeof(array)<<endl;
    return 0;
}

