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

ll n, t, a[200005];
ll sum;
multiset<pair<ll, ll>, greater<pair<ll, ll> > > S;

void erase_till_ok()
{
	while (!S.empty())
	{
		pair <ll, ll> p = *(S.begin());
		if (p.first > t)
		{
			sum -= p.first;
			a[p.second] = 0;
			S.erase(S.begin());
		}
		else
			break;
	}
}

int main() 
{
	ios_base::sync_with_stdio(false);
	#ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
	#else
	#endif
	scanf("%lld %lld", &n, &t);
	for (ll i = 1; i <= n; i++)
	{
		scanf("%lld", &a[i]);
		S.insert({ a[i], i });
		sum += a[i];
	}
	ll ans=0;
	while (!S.empty())
	{
		erase_till_ok();
		if (S.empty())
			break;
		if (sum <= t && sum)
		{
			ans += (t / sum) * S.size();
			t = t % sum;
		}
		else
		{
			for (int i=1; i<=n; i++)
			{
				if (a[i] <= t && a[i])
				{
					t -= a[i];
					ans++;
				}
			}
		}
	}
	printf("%lld", ans);

	return 0;
}