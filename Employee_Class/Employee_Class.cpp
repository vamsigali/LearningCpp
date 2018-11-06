// Encapsulation.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream"
using namespace std;

class Account
{
public:
	int accountnumber = 0;
	float balance = 0.0f;
	char customername[20];

public:
	static int number;
	void OpenAccount(char name[], int amount)
	{
		this->accountnumber = ++number;
		strcpy_s(this->customername,name);
		this->balance = amount;
		cout << "Congratulations!!Your Account is Opened..!" << endl;
		cout << "Your Account Number is : "<<this->accountnumber<<endl;
	}
	void Display(int number)
	{
		cout << endl;
		cout << "*************Printing the Account Details****************" << endl << endl;
		cout << "Account Number  : " << this->accountnumber << endl;;
		cout << "Name            : " << this->customername << endl;
		cout << "Balance         : " << this->balance << endl;

	}
	void Deposit(float deposit_amount)
	{
		this->balance = (this->balance) + (deposit_amount);
		cout << "your Updated Balance         : " << balance << endl;

	}
	void Withdraw(float withdraw_amount)
	{
		this->balance = this->balance - withdraw_amount;
		cout << "your Updated Balance         : " << balance << endl;
	}
	
};
int Account::number = 100;
int search(Account a[], int number)
{
	int pos;
	for (int i = 0; i < 3; i++)
	{
		if (number == a[i].accountnumber)
		{
			pos = i;
			return pos;
		}
	}
	cout << "Please Enter Valid Account Number";
	return -1;
	
}

int main()
{
	Account a[3],account;
	int accountnumber, position = 0, size = 3,pos=-1;
	char custname[20];
	float balance;
	int choice, tchoice;
	char proceed;
	float deposit_amount;
	float withdraw_amount;
	
	cout << "__________________Welcome To C++ Bank_________________";
	do
	{

		cout << endl << endl << "1.Open Account" << endl;
		cout << "2.Transact the existing account " << endl;
		cout << "3.Exit the application " << endl;
		cout << endl << "Enter your choice : ";
		cin >> choice;
		switch (choice)
		{
		case 1:
			if (position < size)
			{
				cout << "Enter Your name      : ";
				cin >> custname;
				cout << "Enter Intial Balance : ";
				cin >> balance;
				a[position++].OpenAccount(custname, balance);
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
				pos = search(a, accountnumber);
				if (pos >=0 & pos<10)
				{
					a[pos].Display(accountnumber);
				}
				
				break;
			case 2:
				cout << endl;
				cout << "Enter Account Number : ";
				cin >> accountnumber;
				cout << "Enter the Amount : ";
				cin >> deposit_amount;
				pos=search(a,accountnumber);
				if (pos > 0 & pos<10)
				{
					a[pos].Deposit(deposit_amount);
				}
				break;
			case 3:
				cout << endl;
				cout << "Enter Account Number : ";
				cin >> accountnumber;
				cout << "Enter the Amount : ";
				cin >> withdraw_amount;
				pos = search(a,accountnumber);
				if (pos > 0 & pos<10)
				{
					a[pos].Withdraw(withdraw_amount);
				}
				
				break;
			}
			break;
		case 3:
			cout << "Thank you for banking with us!!!" << endl;
			break;
		default:
			cout << "Please Enter Valid Input!!" << endl;
			break;
		}
	} while (choice == 1 || choice == 2);



	return 0;
}

