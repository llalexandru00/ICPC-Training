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

int n, a[100005], b[100005], x[100005], y[100005], t[100005];

bool solve()
{
	for (int i = 1; i < n; i++)
		x[i] = a[i];
	for (int i = 1; i < n; i++)
		y[i] = b[i];
	for (int i = 2; i <= n; i++)
		t[i] = 0;
	for (int k = 0; k < 2; k++)
	{
		for (int i = 1; i < n; i++)
		{
			if (x[i] % 2 == 0 && y[i] % 2 == 0 && (t[i]>>k) % 2 == 0)
				t[i + 1] += 0;
			else if (x[i] % 2 == 1 && y[i] % 2 == 0 && (t[i]>>k) % 2 == 0)
				t[i + 1] += (1<<(k));
			else if (x[i] % 2 == 1 && y[i] % 2 == 0 && (t[i]>>k) % 2 == 1)
				t[i + 1] += 0;
			else if (x[i] % 2 == 1 && y[i] % 2 == 1 && (t[i]>>k) % 2 == 1)
				t[i + 1] += (1<<k);
			else
				return 0;
		}
		for (int i = 1; i < n; i++)
		{
			x[i] /= 2;
			y[i] /= 2;
		}
	}
	return 1;
}

int main()
{
	cin >> n;
	for (int i = 1; i < n; i++)
		cin >> a[i];
	for (int i = 1; i < n; i++)
		cin >> b[i];
	for (int i = 0; i <= 3; i++)
	{
		t[1] = i;
		if (solve())
		{
			t[1] = i;
			cout << "YES\n";
			for (int i = 1; i <= n; i++)
				cout << t[i] << " ";
			return 0;
		}
	}
	cout << "NO";
	return 0;
}