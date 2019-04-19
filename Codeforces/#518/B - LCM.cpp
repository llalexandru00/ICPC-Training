#include <iostream>
#include <algorithm>
#include <fstream>
#include <list>
#include <vector>
#include <set>
#include <cmath>
#include <map>
#include <queue>
#include <stack>
#include <string>
#include <cstring>
#include <cstdio>
#include <functional>
#include <iomanip>

#pragma warning(disable:4996)
#define mod ll((1e9)+7)
#define inf 1e18
#define nmax 1005

using namespace std;
typedef long long ll;
typedef long double ld;

ll b, nr;

int main()
{
	cin >> b;
	for (ll i = 1; i*i <= b; i++)
	{
		if (b%i == 0)
		{
			nr+=2;
			if (b / i == i)
				nr--;
		}
	}
	cout << nr;
	return 0;
}