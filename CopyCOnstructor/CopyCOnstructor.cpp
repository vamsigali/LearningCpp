// CopyCOnstructor.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream"
using namespace std;
class Item 
{
	int id=0;
public:
	Item()
	{
		id = 100;
	}
	Item(Item &a)
	{
		this->id = a.id;
		cout << "copy" << endl;
	}
	void display()
	{
		cout << "Id : "<<id<<endl;
	}
};
int main()
{
	Item i1;
	Item i2 = i1;
	Item i3(i1);
	i2.display();
	i3.display();
	Item i4;
	i4 = i1;
	i1.display();
    return 0;
}

