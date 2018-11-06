// StudentMarks.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include"iostream"
using namespace std;

int main()
{
	short math_mark, phy_mark, che_mark, total;
	float percentage;
	char choice;
	do 
	{
	cout << "Enter Maths Marks : ";
	cin >> math_mark;
	cout << "Enter physics Marks : ";
	cin >> phy_mark;
	cout << "Enter chemistry Marks : ";
	cin >> che_mark;
	if (math_mark >= 40 && phy_mark >= 40 && che_mark >= 40)
	{
		total = (math_mark + phy_mark + che_mark);
		percentage = (total / 3);
		if (percentage >= 75)
		{
			cout << "Congrats!!!You cleared the test with Distinction by securing " << percentage << "%" << endl;
		}

		else if (percentage >= 60)
		{
			cout << "Congrats!!!You cleared the test with class by securing " << percentage << "%" << endl;
		}

		else if (percentage >= 50)
		{
			cout << "Congrats!!!You cleared the test with Second Class by securing " << percentage << "%" << endl;
		}
		else 
		{
			cout << "Congrats!!!You cleared the test by securing " << percentage << "%" << endl;
		} 
	}
	
	else
	{
		if (math_mark == 39)
		{
			math_mark++;
		}
		if (phy_mark == 39)
		{
			phy_mark++;
		}
		if (che_mark == 39)
		{
			che_mark++;
		}
		total = (math_mark + phy_mark + che_mark);
		percentage = (total / 3);
		if (percentage >= 40)
		{
			cout << "Congrats!!!You cleared the test with Second Class by securing " << percentage << "%" << endl;
		}
		else
		{
			cout << "I am sorry!!You have failed with percentage " << percentage << "%" << endl;
		}

	}
	cout << "Any other Student Exists  (Y/N) : ";
	cin >> choice;
	} 
	while (choice == 'y' || choice == 'Y');
		
    return 0;
}

