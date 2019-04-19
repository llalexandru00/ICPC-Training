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

int n, m, k, w, x, a;
pair<int, int> R[5005], C[5005];


int main()
{
	cin >> n >> m >> k;
	for (int i = 1; i <= k; i++)
	{
		cin >> w >> x >> a;
		if (w == 1) // paint row
			R[x] = { a, i };
		else // paint colomn 
			C[x] = { a, i };
	}
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= m; j++)
		{
			if (R[i].second < C[j].second)
				cout << C[j].first << " ";
			else
				cout << R[i].first << " ";
		}
		cout << '\n';
	}
	return 0;
}