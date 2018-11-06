// Structures.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream"
using namespace std;
struct Date
{
	int dd, mm, yy;
};
struct student
{
	int id;
	char name[1];
	struct Date dob;
};
int main()
{
	student s[10];
	int search;
	s[0].id = 101;
	s[0].name[1] = 'v';
	s[0].dob.dd = 17;
	s[0].dob.mm = 07;
	s[0].dob.yy = 1996;
	cout << s[0].id << endl;
	cout << s[0].name << endl;
	cout << s[0].id << endl;
	cout << s[0].name << endl;
	s[9] = s[0];
	s[8] = s[9]; 
	cout << "enter the index in which u want ri search :'";
	cin >> search;
	cout << s[search].name[1];
	//cout << sizeof(student);
	cout << s[0].dob.dd << "-" << s[0].dob.mm << "-"<<s[0].dob.yy << endl;
	cout << s[9].dob.dd << "-" << s[9].dob.mm << "-" << s[9].dob.yy << endl;
	cout << s[8].name<<endl;
    return 0;
}

