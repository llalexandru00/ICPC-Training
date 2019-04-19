#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

struct dat{ll val, idx;} V[200005];
ll n, m;
vector<ll> F[200005], Upd;
set<ll> S;
ll Ans[200005];



int main() {
    ll x, y;
    cin>>n>>m;
    for (ll i=1; i<=n; i++)
    {
        cin>>V[i].val;
        V[i].idx=i;
    }
    sort(V+1, V+n+1, [](dat a, dat b){ return a.val<b.val;});

    for (ll i=1; i<=m; i++)
    {
        cin>>x>>y;
        F[x].push_back(y);
        F[y].push_back(x);
    }

    ll lastv=-1, lng=1;
    for (ll i=1; i<=n; i++)
    {
        if (V[i].val!=lastv)
        {
            for (auto k : Upd)
            {
                ll poz = i-lng-1;
                for (auto j : F[k])
                    if (S.find(j)!=S.end())
                        poz--;
                Ans[k]=poz;
            }
            for (auto k : Upd)
                S.insert(k);
            Upd.clear();
            lastv = V[i].val;
            lng=1;
            Upd.push_back(V[i].idx);
        }
        else
        {
            Upd.push_back(V[i].idx);
            lng++;
        }
    }
    for (auto k : Upd)
    {
        ll poz = n-lng;
        for (auto j : F[k])
            if (S.find(j)!=S.end())
                poz--;
        Ans[k]=poz;
    }
    for (auto k : Upd)
        S.insert(k);
    for (ll i=1; i<=n; i++)
        cout<<Ans[i]<<" ";
    return 0;
}