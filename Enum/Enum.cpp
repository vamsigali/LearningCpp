// Enum.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include"iostream"
using namespace std;
enum shape
{
	circle = 1,
	square,
	rectangle,
	triangle=3,

	
};

int main()
{
	int choice;
	cout << "Welcome to Area Calculator" << endl << endl;
	cout << "Select the shape you would like to proceed??" << endl << endl;
	cout << "1.Circle" << endl;
	cout << "2.Square" << endl;
	cout << "3.Rectangle" << endl;
	cout << "**********************" << endl << endl;
	cout << "Enter your choice : ";
	cin >> choice;
	switch (choice)
	{
	case circle:
		cout << "This is Area of circle"<<endl;
		break;
	case square:
		cout << "This is Area of circle"<<endl;
		break;
	case rectangle:
		cout << "This is Area of circle"<<endl;
		break;
	default:
		break;
	}

    return 0;
}

