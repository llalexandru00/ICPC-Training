#include <iostream>
#include <algorithm>

using namespace std;

typedef long long ll;
ll n, k, a, b, c, maxim;
struct p { ll a, b, c, s; }V[1005], C[1005];
p D[] = { {1, 1, 1}, {1, 1, -1}, {1, -1, 1}, {1, -1, -1}, {-1, 1, 1}, {-1, 1, -1}, {-1, -1, 1}, {-1, -1, -1} };

bool comp(p a, p b)
{
	return a.s > b.s;
}

void solve(p M[], p c)
{
	for (ll i = 1; i <= n; i++)
	{
		M[i].a *= c.a;
		M[i].b *= c.b;
		M[i].c *= c.c;
		M[i].s = M[i].a + M[i].b + M[i].c;
	}
	sort(M + 1, M + n + 1, comp);
	ll tot = 0;
	for (ll i = 1; i <= k; i++)
		tot += M[i].s;
	if (tot > maxim)
		maxim = tot;

}

int main()
{
	cin >> n >> k;
	for (ll i = 1; i <= n; i++)
		cin >> V[i].a >> V[i].b >> V[i].c;
	for (ll i = 1; i <= n; i++)
		C[i] = V[i];
	for (ll i = 0; i < 8; i++)
	{
		solve(V, D[i]);
		for (ll i = 1; i <= n; i++)
			V[i] = C[i];
	}
	cout << maxim;
	return 0;
}