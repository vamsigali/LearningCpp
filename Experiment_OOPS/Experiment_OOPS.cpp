//// ObjectCount.cpp : Defines the entry point for the console application.
////
//
#include "stdafx.h"
//#include "iostream"
//using namespace std;
//
//class Count
//{
//	static int stat;
//public:
//	Count()
//	{
//		stat++;
//		
//	}
//};
//int Count::stat = 0;
//int main()
//{
//	Count c[10];
//	
//	return 0;
//}
//
#include <iostream>     // std::cout
#include <new>          // ::operator new
//
//class MyClass {
//public:
//	int data[1];
//public:	MyClass()
//	{ 
//		std::cout << "constructed [" << this << "]\n";
//	}
//public:
//	void hello()
//	{
//		std::cout << "hello"  ;
//	}
//};
//
//int main() {
//
//	MyClass p5;
//	std::cout << "1: ";
//	MyClass * p1 = new MyClass();
//	std::cout <<std::endl<< p1;
//	std::cout<<std::endl<<&(p1->data[0]);
//	p1->hello();
//	// allocates memory by calling: operator new (sizeof(MyClass))
//	// and then constructs an object at the newly allocated space
//
//	std::cout << "2: ";
//	MyClass * p2 = new (std::nothrow) MyClass();
//	// allocates memory by calling: operator new (sizeof(MyClass),std::nothrow)
//	// and then constructs an object at the newly allocated space
//	
//	std::cout << "3: ";
//	new (p1) MyClass();  //going to inline new 
//	// does not allocate memory -- calls: operator new (sizeof(MyClass),p2)
//	// but constructs an object at p2
//
//	// Notice though that calling this function directly does not construct an object:
//	std::cout << "4: ";
//	MyClass * p3 = (MyClass*) ::operator new (sizeof(MyClass));
//	// allocates memory by calling: operator new (sizeof(MyClass))
//	// but does not call MyClass's constructor
//
//	//line 47 and 66 are going to same line of code
//	delete p1;
//	delete p2;
//	delete p3;
//
//	return 0;
//}

using namespace std;
 class Abc
 {
 public:
	 Abc()
	 {
		 cout << "hello";
	 }
	 Abc hello(Abc s)
	 {
		 Abc k;
		 return  k;
	 }

 };

 void main()
 {
	 Abc p1;
	 //throwng allocation
	 //using new keyword
	 //here the mempry is allocated and it returns a pointer pointing ti the location and returns  badalloc in false case
	 Abc *p2 = new Abc();
	 //using no throw allocatoin 
	 Abc *p3 = new (nothrow) Abc();
	 //using  placemnent
	 //here already memory is there now we are just pointing it
	 //constructs an object at p2
	 new (p2) Abc();

	 p1.hello(Abc());
	 //allocates memory but does not call the constructor
	 Abc *p4 = (Abc*)operator new(sizeof(Abc));
 }