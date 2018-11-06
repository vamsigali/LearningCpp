// ObjectCount.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream"
using namespace std;

class Count
{
	static int stat;
public:
	Count()
	{
		stat++;
	}
	void getdata()
	{
		cout << "Objects created are : " << stat << endl;
	}
};
int Count::stat = 0;
int main()
{
	Count c[10];
	c[3].getdata();
    return 0;
}

