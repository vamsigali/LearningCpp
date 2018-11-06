// Pointers.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream"
using namespace std;


int main()
{
	char *name = "vamsi";
	cout << "name : " << name << endl;
	cout << "*name+1 : " << *name + 1 << endl;

	cout << "name++ : " << name++ << endl;
	cout << "*name : " << *name << endl;
	cout << "name+1 : " << name+1 << endl;
	
	cout << "*name+1 : " << *name+1 << endl;
	
    return 0;
}

