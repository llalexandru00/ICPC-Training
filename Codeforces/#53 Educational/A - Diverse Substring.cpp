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

int n;
string s;
int F[1005][300];

int main() 
{
	#ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
	#else
	#endif
	cin >> n;
	cin >> s;
	for (int i = 0; i < s.size(); i++)
		for (int j = 'a'; j <= 'z'; j++)
			F[i][j] = F[i - 1][j] + (j == s[i]);
	for (int i = 0; i < s.size(); i++)
	{
		for (int j = i; j < s.size(); j++)
		{
			int ok = 0;
			for (int k = 'a'; k <= 'z'; k++)
			{
				if (F[j][k] - F[i - 1][k] > (j-i+1)/2)
					ok = 1;
			}
			if (ok == 0)
			{
				cout << "YES" << '\n';
				for (int k = i; k <= j; k++)
					cout << s[k];
				return 0;
			}
		}
	}
	cout << "NO";
	return 0;
}