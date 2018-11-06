// MethodOverloading.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include"iostream"
using namespace std;

float Area(float radius);
int Area(int length);
int Area(int length, int breadth);
	

int main()
{
	int choice;
	int length, breadth;
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
	case 1:
		float radius;
		cout << endl << "Welcome to Circle Area Calculator" << endl;
		cout << "Enter the Radius : ";
		cin >> radius;
		cout << "Area of circle is = " << Area(radius) << endl;
		break;
	case 2:
		cout << endl << "Welcome to Square Area Calculator" << endl;
		cout << "Enter the Radius : ";
		cin >> length;
		cout << "Area of Square is = " << Area(length) << endl;
		break;
	case 3:
		cout << endl << "Welcome to Rectangle Area Calculator" << endl;
		cout << "Enter the length : ";
		cin >> length;
		cout << "Enter the breadth : ";
		cin >> breadth;
		cout << "Area of Rectangle is = " << Area(length, breadth) << endl;
		break;
	default:
		break;
	}
	return 0;
}
float Area(float radius)
{

	return (3.14*(radius*radius));
}

int Area(int length)
{

	return (length*length);

}

int Area(int length, int breadth)
{

	return (length*breadth);

}


