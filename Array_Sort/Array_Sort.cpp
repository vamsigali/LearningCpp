// Array_Sort.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream"
using namespace std;

void Swap(int *a,int *b) 
{ 
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;

}
void BubbleSort(int arr[],int size)
{
	for (int i = 0; i < size - 1; i++)
	{
		for (int j = 0; j <size - i - 1; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				Swap(&arr[j],&arr[j+1]);
			}
		}
	}
}
void Print(int arr[], int size)
{
	for (int j = 0; j <= size - 1; j++)
	{
		cout << arr[j] << " ";
	}
	cout << endl;
}
int main()
{
	int arr[7] = { 7,6,5,4,3,2,1 };
	int size = sizeof(arr) / sizeof(arr[0]);
	BubbleSort(arr,size);
	Print(arr,size);
    return 0;
}

