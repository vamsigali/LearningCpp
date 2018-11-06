// Structures_Big.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream"
using namespace std;



void Input(int array[])
{

	for (int i=0; i < 5; i++)
	{
		array[i] = i + 100;
	}
}
void Print(int array[])
{
	for (int i=0; i < 5; i++)
	{
		cout << array[i] << endl;
	}
}

int main()
{
	int array[5];
	Input(array);
	Print(array);
	return 0;
}

