#include <iostream>
#include <cstring>
#include <algorithm>
#include <string>
#include <cstdio>
#include <iomanip>
#include <set>
#include <functional>
#include <cmath>
#include <vector>
#include <unordered_map>
#include <map>
#pragma warning(disable:4996)

using namespace std;
typedef long long ll;

vector <int> V;
int n, m, l, r, F[105];

int main() {
	cin >> n >> m;
	for (int i = 1; i <= n; i++)
	{
		cin >> l >> r;
		for (int j = l; j <= r; j++)
			F[j] = 1;
	}
	for (int i = 1; i <= m; i++)
	{
		if (F[i] == 0)
			V.push_back(i);
	}
	cout << V.size() << '\n';
	for (auto i : V)
	{
		cout << i << " ";
	}
	return 0;
}