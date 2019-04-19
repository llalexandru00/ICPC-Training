#include <iostream>
#include <utility>
#include <algorithm>
#include <string>
#include <map>
#include <set>
#include <queue>
#include <cstdlib>
#include <stack>
#include <iomanip>
#include <cstring>
#include <vector>
#include <cmath>
#include <utility>
#include <fstream>
#include <cassert>
#include <cmath>
#define NMAX 1000005
#define MOD 2147483647
#define INF 1e9
#pragma warning(disable:4996)

using namespace std;
typedef long long ll;
typedef long double ld;

ll convert(int n, int b, int v[])
{
	ll ans = 0;
	for (int i = 1; i <= n; i++)
		ans = ans * b + v[i];
	return ans;
}

ll getnr()
{
	int v[12], n, b;
	cin >> n >> b;
	for (int i = 1; i <= n; i++)
		cin >> v[i];
	return convert(n, b, v);
}

int main()
{
	ll x = getnr();
	ll y = getnr();
	if (x == y)
		cout << "=";
	if (x < y)
		cout << "<";
	if (x > y)
		cout << ">";
	return 0;
}