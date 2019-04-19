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
int p[200005], x;

int main() 
{
	ios_base::sync_with_stdio(false);
	#ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
	#else
	#endif
	scanf("%d", &n);
	int last = 0;
	for (int i = 1; i <= n; i++)
	{
		scanf("%d", &x);
		p[x] = i;
	}

	for (int i = 1; i <= n; i++)
	{
		scanf("%d", &x);
		if (last < p[x])
		{
			printf("%d ", p[x] - last);
			last = p[x];
		}
		else
			printf("0 ");
	}

	return 0;
}