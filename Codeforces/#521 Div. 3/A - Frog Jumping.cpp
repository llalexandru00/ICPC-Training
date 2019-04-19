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

long long a, b, k, t;
struct dar { int nr; char c; }V[100005];

int main() {
	ios_base::sync_with_stdio(false);
	cin >> t;
	while (t--)
	{
		cin >> a >> b >> k;
		cout << (a - b)*(k / 2) + a * (k % 2)<<'\n';
	}
	return 0;
}