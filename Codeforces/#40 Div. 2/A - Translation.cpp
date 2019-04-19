// CodeforcesC++.cpp : Defines the entry point for the console application.
//

//#include "stdafx.h"
#include <iostream>
#include <string>

using namespace std;

string s, c;
int i;

int main()
{
	cin >> s;
	cin >> c;
	for (i = 0; i < s.size() / 2; i++)
		swap(s[i], s[s.size() - i - 1]);
	if (s == c)
		cout << "YES";
	else
		cout << "NO";
    return 0;
}
