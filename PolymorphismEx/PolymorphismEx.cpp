// PolymorphismEx.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream"
using namespace std;

class Animal
{
public:
	virtual void speak(void) = 0;

};
class Dog :public Animal
{

	void speak()
	{
		cout << "Bow Bow"<<endl;
	}
};
class Cat : public Animal
{

	void speak()
	{
		cout << "Meaw" << endl;
	}

};
class Rat :public Animal
{

	void speak()
	{
		cout << "Chew" << endl;
	}

};
int main()
{
	Animal *animals[3];
	animals[0] = new Dog();
	animals[1] = new Cat();
	animals[2] = new Rat();
	for (int i = 0;i <=2;i++)
	{
		animals[i]->speak();
	}
    return 0;
}

	