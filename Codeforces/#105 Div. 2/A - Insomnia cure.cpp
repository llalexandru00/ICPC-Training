// CodeforcesC++.cpp : Defines the entry point for the console application.
//

//#include "stdafx.h"
#include <iostream>

using namespace std;

int a, b, c, d, n, i, F[100005], nr;

int main()
{
	cin >> a >> b >> c >> d >> n;
	for (i = a; i <= n; i += a)
		F[i] = 1;
	for (i = b; i <= n; i += b)
		F[i] = 1;
	for (i = c; i <= n; i += c)
		F[i] = 1;
	for (i = d; i <= n; i += d)
		F[i] = 1;
	for (i = 1; i <= n; i++)
		if (F[i] == 1)
			nr++;
	cout << nr;
    return 0;
}

