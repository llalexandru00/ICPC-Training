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

ll n, k, x, l, ok;

int main()
{
	cin >> n>>k;
	for (int i = 1; i <= n; i++)
	{
		cin >> x;
		if (x < k)
			l++;
		if (x == k)
			ok = 1;
	}
	cout << k - l + ok;
	return 0;
}