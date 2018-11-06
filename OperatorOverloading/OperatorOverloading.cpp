 // OperatorOverloading.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream"
using namespace std;
class Complex
{
	int id;
	int marks;
public:
	Complex()
	{}
	Complex(int id, int marks)
	{
		this->id = id;
		this->marks=marks;
	}
	Complex operator+(Complex c)
	{
		Complex temp;
		temp.id = this->id + c.id;
		temp.marks = this->marks + c.marks;
		return temp;
	}
	void display()
	{
		cout << "id : " << this->id<<endl;
		cout << "marks : " << this->marks << endl;
	}
	
};
int main()
{
	Complex c1=Complex(101,87);
	Complex c2 = Complex(102, 90);
	Complex c3;
	c3 = c1 + c2;
	c3.display();
    return 0;
}

