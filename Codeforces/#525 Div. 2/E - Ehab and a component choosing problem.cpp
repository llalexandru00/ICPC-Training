#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

ll x, y, n, T[300005], maxim=(ll)-1e18, Viz[300005], k;
vector<ll> V[300005];

ll dfs(ll x)
{
    ll s=T[x];
    Viz[x]=1;
    for (auto i : V[x])
    {
        if (!Viz[i])
        {
            ll val = dfs(i);
            if (val>0)
                s+=val;
        }
    }
    if (s>maxim)
        maxim=s, k=1;
    else if (s==maxim)
        k++;
    return s;
}

int main()
{
    cin>>n;
    for (ll i=1; i<=n; i++)
        cin>>T[i];
    for (ll i=1; i<n; i++)
    {
        cin>>x>>y;
        V[x].push_back(y);
        V[y].push_back(x);
    }
    dfs(1);
    cout<<maxim*k<<" "<<k;
    return 0;
}