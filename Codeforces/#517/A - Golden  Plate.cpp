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

int n, m, k, ans;

int main()
{
	cin >> n >> m >> k;
	for (int i = 1; i <= k; i++)
	{
		ans += n * 2 + m * 2 - 4;
		n = max(0, n-4);
		m = max(0, m-4);
	}
	cout << ans;
	return 0;
}