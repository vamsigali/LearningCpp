

#include "stdafx.h"
#include"iostream"
using namespace std;


int main()
{
	float input1, input2;
	int choice;
	char choice2;
	do{
		cout << "Enter the two Inputs" << endl;
		cout << "Enter the Integer 1 : ";
		cin >> input1;
		cout << "Enter the Integer 2 : ";
		cin >> input2;
		cout << "**********************" << endl << endl;
		cout << "What operation would you like to perform??" << endl << endl;
		cout << "1.Addition" << endl;
		cout << "2.Substration" << endl;
		cout << "3.Multiplication" << endl;
		cout << "4.Divison" << endl << endl;
		cout << "**********************" << endl << endl;
		again:
		cout << "Enter your choice : " ;
		cin >> choice;
		switch (choice)
		{
			case 1:
				cout << input1 << "+" << input2 << "=" << input1 + input2 << endl;
				break;
			case 2:
				cout << input1 << "-" << input2 << "=" << input1 - input2 << endl;
				break;
			case 3:
				cout << input1 << "*" << input2 << "=" << input1 * input2 << endl;
				break;
			case 4:
				cout << input1 << "/" << input2 << "=" << input1 / input2 << endl;
				break;
			default:
				cout << "please enter valid input!!" << endl;
				goto again;
				break;
		}
			cout <<endl<< "Would you like to continue?/...(Y/N) :  ";
			cin >> choice2;
		} 
		while (choice2 == 'y' || choice2 == 'Y');
		return 0;
}

