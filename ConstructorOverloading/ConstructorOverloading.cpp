// ConstructorOverloading.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream"
using namespace std;
class Employee
{
	int ID ;
	int salary ;
	char name[20];
public:
	Employee()
	{
	
	}
	Employee(int id, char name[], int salary = 10000)
	{
		this->ID = id;
		this->salary = salary;
		strcpy_s(this->name, name);

	}
	Employee(char name[], int id, int salary)
	{
		this->ID = id;
		this->salary = salary;
		strcpy_s(this->name, name);
	}
	void Display()
	{
		cout << "--------------------------"<<endl;
		cout << "ID : " << this->ID<<endl;
		cout << "Name : " << this->name << endl;
		cout << "salary : " << this->salary << endl;
	}
};
int main()
{
	Employee *e1=new Employee();
	(*e1).Display();
	Employee e4;
	e4.Display();
	Employee e2 = Employee(101,"vamsi",12000); e2.Display();
	Employee e3 = Employee( "vamsi", 101, 12000); e3.Display();
	Employee p("vamsi", 101, 12000);
	p.Display();

	Employee *a;
	a = new Employee();
    return 0;
}

