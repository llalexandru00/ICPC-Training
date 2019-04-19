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
#define nmax 1005
#define mod ll((1e9)+7)
#define INF 1e18

using namespace std;
typedef long long ll;

int a, b, c, nr;

int main()
{
	cin >> a >> b >> c;
	while (a + b <= c || a+c<=b)
		a++, nr++;
	while (b + c <= a || b + a <= c)
		b++, nr++;
	while (c + a <= b || c + b <= a)
		c++, nr++;
	cout << nr;
	return 0;
}