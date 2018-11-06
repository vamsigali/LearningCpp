// Encapsulation.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream"
#include "c:\Users\GAK\Documents\Visual Studio 2015\Projects\LearningCpp\EmployeeClass\Example.h"
using namespace std;

class Account
{
private:
	int accountnumber = 1;
	float balance = 0.0f;
	char *customername;

public:

	void OpenAccount(int number, char name[], int amount)
	{
		this->accountnumber = number;
		this->customername = name;
		this->balance = amount;
	}
	void Display(Account a[],int number)
	{
		int i = search(a,number);
		cout << endl;
		cout << "*************Printing the Account Details****************" << endl << endl;
		cout << "Account Number  : " << a[i].accountnumber << endl;;
		cout << "Name            : " << a[i].customername << endl;
		cout << "Balance         : " << a[i].balance << endl;
		
	}
	int search(Account a[], int number)
	{
		for (int i = 0; i < 3; i++)
		{
			if (number == a[i].accountnumber)
			{
				return i;
			}
			else
			{
				cout << "Please Enter valid account Number!!!";
			}
		}
	}
	void Deposit(float deposit_amount)
	{
		this->balance = balance + deposit_amount;
		cout << "your Updated Balance         : " << balance << endl;

	}
	void Withdraw(float withdraw_amount)
	{

		this->balance = balance - withdraw_amount;
		cout << "your Updated Balance         : " << balance << endl;
	}
};
int main()
{
	Example ex1;
	Example *ex2 = new Example();
	ex1.hello();
	ex2->hello();
	Example hello();
	/*Example::ex2.hello();*/
	int accountnumber, position = 0, size = 3;
	char name[20];
	float balance;
	int choice,tchoice;
	char proceed;
	float deposit_amount;
	float withdraw_amount;
	Account a[3];
	cout << "__________________Welcome To C++ Bank_________________";
	do
	{

		cout << endl << endl << "1.Open Account" << endl;
		cout << "2.Transact the existing account "<<endl;
		cout << "3.Exit the application "<<endl;
		cout << endl << "Enter your choice : ";
		cin >> choice;
		switch (choice)
		{
		case 1:
			if (position < size)
			{
				cout << endl;
				cout << "Enter Account Number : ";
				cin >> accountnumber;
				cout << "Enter Your name      : ";
				cin >> name;
				cout << "Enter Intial Balance : ";
				cin >> balance;
				cout << "Congratulations!!Your Account is Opened..!" << endl;
				a[position++].OpenAccount(accountnumber,name,balance);
				break;
			}
			else
			{
				cout << endl << endl << "please Excuse us!!We have exceed our array limit!!" << endl;
				cout << "New account openings could not done";
				break;
			}

		case 2:
			cout << endl << endl;
			cout << "1.Dispaly the info" << endl;
			cout << "2.Deposit the Amount" << endl;
			cout << "3.Withdraw the Amount" << endl;
			cout << endl << "Enter your choice : ";
			cin >> tchoice;
			switch (tchoice)
			{
			case 1:
				cout << endl;
				cout << "Enter Account Number : ";
				cin >> accountnumber;
				a[position].Display(a,accountnumber);
				break;
			case 2:
				cout << endl;
				cout << "Enter Account Number : ";
				cin >> accountnumber;
				cout << "Enter the Amount : ";
				cin >> deposit_amount;
				a[position].Deposit(deposit_amount);
				break;
			case 3:
				cout << endl;
				cout << "Enter Account Number : ";
				cin >> accountnumber;
				cout << "Enter the Amount : ";
				cin >> withdraw_amount;
				a[position].Withdraw(withdraw_amount);
				break;
			}
			break;
		case 3:
			cout << "Thank you for banking with us!!!"<<endl;
			break;
		default:
			cout << "Please Enter Valid Input!!"<<endl;
			break;
		}
	} while (choice == 1 || choice == 2);



	return 0;
}

