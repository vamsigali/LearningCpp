// DynamicMemoryAlloc.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream"
using namespace std;

int main()
{
	void *ptr = malloc(sizeof(char));
	ptr = "Vamsi";
	char *pt = (char *)ptr;
	cout << pt << endl;
	cout << "(char*)ptr = " << (char*)ptr << endl;
	cout << ptr << endl;
	cout << *pt<<endl;

	cout << "------------------------------------------"<<endl;
	int array[] = {1,2,3,4,5};
	void *iptr = malloc(sizeof(int));
	iptr = array;
	int *ipt = (int *)iptr;
	cout <<"ipt  : " << ipt<<endl;
	cout << "*ipt : "<<*ipt<<endl;
	cout << "iptr : "<<iptr << endl;
	for (int i=0;i<5;i++)
	{
		cout << ipt[i] << '\t';
	}
	
	cout <<endl<< "---------------------------------------"<<endl;
	int *p = new int;
	cout << "\n*p  : " << *p << endl;
	cout << "\np   : " << p << endl;
	delete p;
	int a = 20;
	p = new int(10);
	cout << "\n*p  : " << *p<<endl;
	cout << "\np  : " << p << endl;
    return 0;
}

