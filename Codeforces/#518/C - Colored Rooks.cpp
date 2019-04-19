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

ll n, m, k, l;
ll M[105][105];
ll x, y;
vector<ll> V[105];

int main()
{
	cin >> n >> m;
	for (int i = 1; i <= m; i++)
	{
		cin >> x >> y;
		V[x].push_back(i);
		V[y].push_back(i);
	}
	for (int i = m + 1; i <= m + n; i++)
	{
		V[i - m].push_back(i);
	}
	for (int i = 1; i <= n; i++)
	{
		cout << V[i].size() << '\n';
		for (auto j : V[i])
		{
			cout << i << " " << j<<'\n';
		}
	}
	return 0;
}