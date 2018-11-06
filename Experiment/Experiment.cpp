#include "stdafx.h"
#include "iostream"
using namespace std;
#include "iostream"
using namespace std;
void Input(int array[])
{

	for (int i = 0; i < 5; i++)
	{
		cin >> array[i];
	}
}
void Print(int array[])
{
	for (int i = 0; i < 5; i++)
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
