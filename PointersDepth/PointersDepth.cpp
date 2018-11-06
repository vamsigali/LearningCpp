#include "stdafx.h"
#include "iostream"
using namespace std;


int main()
{
	int i, j;
	char *ptrarray[] = {
		"A.Ths is A",
		"B.Ths is B",
		"C.Ths is C",
		"D.Ths is D" };
	for (i = 0; i<4; i++)
	{
		for (j = 0; ptrarray[i][j]; j++)
		{
			putchar(ptrarray[i][j]);
		}
		cout << "\n";
	}
	return 0;
}

