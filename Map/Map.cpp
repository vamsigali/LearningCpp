// Map.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream"
#include<map>
using namespace std;

int main()
{
	map<int, char> first;
	first[1] = 'a';
	first[2] = 'b';
	first[3] = 'c';
	first[4] = 'd';
	first[5] = 'e';
	/*first['b'] = 2;
	first['c'] = 3;
	first['d'] = 4;
	first['e'] = 5;*/
	for (map<int, char>::iterator it= first.begin();it != first.end();++it)
	{
		cout << it->first << "=>" << it->second << '\n';
	}
	map<int, char> second(first.begin(), first.end());
	for (map<int, char>::iterator it = second.begin();it != second.end();++it)
	{
		cout << it->first << "=>" << it->second << '\n';
	}
	/*map<char, int>third(second);*/
    return 0;
}

