#include <bits/stdc++.h>
#pragma warning(disable: 4996)
#define INF (1e9)

using namespace std;
typedef long long ll;

ll x, mod, times, V[100005], k, n;

int main() {
	ios_base::sync_with_stdio(false);
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
#endif
    cin>>n>>k;
    for (int i=1; i<=n; i++)
        cin>>V[i];
    sort(V+1, V+n+1);
    ll mod=0;
    for (int i=1; i<=n; i++)
    {
        V[i]-=mod;
        if (V[i]==0)
            continue;
        cout<<V[i]<<'\n';
        mod += V[i];
        times++;
        if (times==k)
            break;
    }
    for (int i=times+1; i<=k; i++)
        cout<<0<<'\n';
	return 0;
}