// Template.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream"
using namespace std;
template<class T>
class Calculator
{
	T a, b,res;

public:

	T add(T a, T b)
	{
		res = a + b;
		return a + b;
	}

	T sub(T a, T b)
	{
		res = a - b;
		return a + b;
	}
	void display()
	{
		cout << res << endl;
	}
};
int main()
{
	Calculator<float> c;
	Calculator<int> c2;
	c.add(10.2, 5.3);
	c.display();
	c2.add(4.5, 6.7);
	c2.display();
    return 0;
}

