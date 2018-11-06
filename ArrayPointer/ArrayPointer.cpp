// ArrayPointer.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream"
using namespace std;

int main()
{
	int Array[] = { 1,2,3,4,5 };
	int *p = &Array[0];
	cout << "P : " << p << endl;
	cout << "*P : " << *p << endl;
	cout << "P+1 : " << p+1 << endl;
	cout << "*P+1 : " << *p+1 << endl;
	cout << "*(P+1) : " << *(p+1) << endl;
    return 0;
}

