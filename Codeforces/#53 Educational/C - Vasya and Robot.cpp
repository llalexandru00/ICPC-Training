#include <iostream>
#include <cstdio>
#include <fstream>
#include <string>
#include <cstring>
#include <cstdlib>
#include <map>
#include <set>
#include <queue>
#include <vector>
#include <algorithm>
#include <cmath>
#include <iomanip>
#pragma warning(disable: 4996)
#define INF (1e9)
#define mod (ll(1e9)+7)

using namespace std;
typedef long long ll;
typedef long double ld;

ll n, x, y, l, r, d, u, start, tot, F[4][200005];
string s;

bool check(int st, int dr)
{
	int up = (st >=1 ? F[0][st - 1]:0) + F[0][s.size() - 1] - F[0][dr]; 
	int dp = (st >= 1 ? F[1][st - 1] : 0) + F[1][s.size() - 1] - F[1][dr];
	int lp = (st >= 1 ? F[2][st - 1] : 0) + F[2][s.size() - 1] - F[2][dr];
	int rp = (st >= 1 ? F[3][st - 1] : 0) + F[3][s.size() - 1] - F[3][dr];
	int loctot = tot;
	
	if (!(up <= u && dp <= d))
	{
		int cat = max(up - u, dp - d);
		if (2 * cat + loctot > n)
			return 0;
		else
			loctot += 2 * cat;
	}

	if (!(lp<=l && rp<=r))
	{
		int cat = max(lp - l, rp - r);
		if (2 * cat + loctot > n)
			return 0;
		else
			loctot += 2 * cat;
	}
	return 1;
}

int cautbin(int st, int dr)
{
	int inist = st, inidr = dr;
	while (st <= dr)
	{
		ll mijl = (st + dr) / 2;
		if (check(inist, mijl))
		{
			dr = mijl - 1;
		}
		else
		{
			st = mijl + 1;
		}
	}
	if (!check(inist, dr))
	{
		if (st > inidr)
			return -5;
		return st;
	}
	else
		return dr;
}


int main()
{
	ios_base::sync_with_stdio(false);
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
#else
#endif
	cin >> n;
	cin >> s;
	for (int i = 0; i < s.size(); i++)
	{
		F[0][i] = F[0][i - 1] + (s[i] == 'U');
		F[1][i] = F[1][i - 1] + (s[i] == 'D');
		F[2][i] = F[2][i - 1] + (s[i] == 'L');
		F[3][i] = F[3][i - 1] + (s[i] == 'R');
	}
	cin >> x >> y;
	if ((abs(x) + abs(y)) > n || (abs(x) + abs(y)) % 2 != n % 2)
	{
		cout << -1;
		return 0;
	}

	if (x < 0)
		l = x * -1;
	else
		r = x;

	if (y < 0)
		d = y * -1;
	else
		u = y;

	tot = l + r + d + u;

	ll minim = 1e18;

	for (int i = 0; i < s.size(); i++)
	{
		int x = cautbin(i, s.size() - 1);
		if (x == -5) continue;
		if (x - i + 1 < minim)
			minim = x - i + 1;
	}

	cout << minim;
	return 0;
}