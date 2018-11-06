// Array_Structure.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream"
using namespace std;
//structure

struct student
{
	int id;
	int marks;
	char name[10];
}; 

// enum definition

enum base
{
	CompareByid = 1,
	CompareBymark = 2,
};
bool(*fp)(student, student);

//Input from user

void Input(student s[])
{ 
	cout << "*************Scanning Details Before Sort******************" << endl << endl;
	for (int i = 0; i < 5; i++)
	{
		
		cout << "Enter the below details for person "<<i+1<<" "<<endl;
		cout << "ID    : ";
		cin >> s[i].id;
		cout << "Marks : ";
		cin >> s[i].marks;
		cout << "Name  : ";
		cin >> s[i].name;
		cout << endl;
	}
	cout << endl << endl;
}

//bool comapre by id

bool CompareById(student s, student p)
{
	if (s.id > p.id)
	{
		return true;
	}
	return false;
}

//bool compare by mark 


bool CompareByMark(student s, student p)
{
	if (s.marks > p.marks)
	{
		return true;
	}
	return false;
}

//serach by id
void SearchById(student s[])
{
	int id;
	cout << "Enter the Id :";
	cin >> id;
	for (int i = 0; i < 5; i++)
	{
		if (s[i].id == id)
		{
			cout << "Id : " << s[i].id << endl;
			cout << "Marks : " << s[i].marks << endl;
			cout << "Name : " << s[i].name << endl;
			break;
		}
		else
		{
			cout << "The Id  is Invalid!!" << endl;
		}
	}
}

//search by marks

void SearchByMarks(student s[])
{
	int marks;
	cout << "Enter the Marks :";
	cin >> marks;
	for (int i = 0; i < 5; i++)
	{
		if (s[i].marks == marks)
		{
			cout << "Id : " << s[i].id << endl;
			cout << "Marks : " << s[i].marks << endl;
			cout << "Name : " << s[i].name << endl;
			break;
		}
		else
		{
			cout << "Entry is not Found!!Try with valid input" << endl;
		}
	}
}

//sorting  

void Sort(student s[], bool(*fp)(student, student))
{
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5 - i - 1; j++)
		{
			if (fp(s[j],s[j + 1]))
			{
				student temp = s[j];
				s[j] = s[j + 1];
				s[j + 1] = temp;
			}
		}
	}
}

//output 

void Output(student s[])
{
	cout << "*************Printing Details After Sorting******************"<<endl << endl;
	cout << "ID " << "   " << "Marks" << " " << "Name " << "  " << endl;
	for (int i = 0; i < 5; i++)
	{
		cout << s[i].id<<"   "<< s[i].marks <<"    "<< s[i].name<<endl;

	}

}
// main method 

int main()
{
	student s[5];
	int sort_choice,search_choice,mainchoice;
	Input(s);
	cout << "What would you like to perform  :" << endl;
	cout << "1.Search" << endl << "2.Sort" << endl << "Enter your choice : ";
	cin >> mainchoice;
	switch (mainchoice)
	{
	case 1:
		cout << endl<<"Please select on what basis Search should be performed :" << endl;
		cout << "1.Id" << endl << "2.Marks" << endl << "Enter your choice : ";
		cin >> search_choice;
		switch (search_choice)
		{
		case 1:
			SearchById(s);
			break;
		case 2:
			SearchByMarks(s);
			break;
		}
		break;
	case 2:
		cout <<endl<< "Please select on what basis Sorting should be performed :" << endl;
		cout << "1.Id" << endl << "2.Marks" << endl << "Enter your choice : ";
		cin >> sort_choice;
		switch (sort_choice)
		{
		case CompareByid:
			fp = &CompareById;
			break;
		case CompareBymark:
			fp = &CompareByMark;
			break;
		}
		Sort(s,fp);
		Output(s);
		break;
	}

	
    return 0;
}

