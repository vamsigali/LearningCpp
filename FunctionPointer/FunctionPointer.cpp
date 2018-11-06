// FunctionPointer.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream"
using namespace std;

void(*fp)(int );
void add()
{
	cout << "hello"<<endl;
}
void dowork(int a)
{
	add();
}
int main()
{
	fp = &dowork;
	fp(2);
    return 0;
}

