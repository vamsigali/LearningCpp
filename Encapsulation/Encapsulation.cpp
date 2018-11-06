// Encapsulation.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream"
using namespace std;

class Account
{
	int accountnumber = 1;
	float balance = 0.0f;
	char name[20];

public:

	void OpenAccount()
	{
		cout << endl;
		if (accountnumber == 1)
		{
			accountnumber = accountnumber + 100;
		}
		else
		{
			accountnumber++;
		}
		cout << "Enter Your name : ";
		cin >> name;
		cout << "Congratulations!!Your Account is Opened..!" << endl;
	}
	void Display()
	{
		cout << endl;
		cout << "*************Printing the Account Details****************" << endl;
		cout << "Account Number  : " << accountnumber << endl;;
		cout << "Name             : " << name << endl;
		cout << "Balance         : " << balance << endl;
	}
	void Deposit(Account a)
	{
		cout << endl;
		int deposit_amount;
		cout << "Enter the Amount : ";
		cin >> deposit_amount;
		balance = balance + deposit_amount;
		a.Display();
	}
	void Withdraw(Account a)
	{
		int withdraw_amount;
		cout << "Enter the Amount : ";
		cin >> withdraw_amount;
		balance = balance - withdraw_amount;
		a.Display();
	}
};
int main()
{
	Account a;
	int choice;
	char proceed;
	cout << "__________________Welcome To C++ Bank_________________" ;
	do
	{

		cout << endl << endl<< "1.Open Account" << endl;
		cout << "2.Dispaly the info" << endl;
		cout << "3.Deposit the Amount" << endl;
		cout << "3.Withdraw the Amount" << endl;
		cout << endl << "Enter your choice : ";
		cin >> choice;
		switch (choice)
		{
		case 1:
			a.OpenAccount();
			break;
		case 2:
			a.Display();
			break;
		case 3:
			a.Deposit(a);
			break;
		case 4:
			a.Withdraw(a);
			break;
		}
		cout << "Would like to proceed  (Y/N) :";
		cin >> proceed;
	} while (proceed == 'y' || proceed == 'Y');


	return 0;
}

