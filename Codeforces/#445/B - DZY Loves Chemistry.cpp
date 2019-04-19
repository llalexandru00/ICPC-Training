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

ll ans, n, m;
vector <int> V[55];
bool Viz[55];

void DFS(int x)
{
	Viz[x] = 1;
	for (auto i : V[x])
		if (!Viz[i])
			DFS(i);
}

int main()
{
	int x, y;
	cin >> n >> m;
	for (int i = 1; i <= m; i++)
	{
		cin >> x >> y;
		V[x].push_back(y);
		V[y].push_back(x);
	}
	for (int i = 1; i <= n; i++)
	{
		if (!Viz[i])
		{
			DFS(i);
			ans++;
		}
	}
	cout << (1LL << (n - ans));
	return 0;
}