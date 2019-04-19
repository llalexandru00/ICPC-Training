#include <bits/stdc++.h>
#define eps 1e-6

using namespace std;

typedef long long ll;
typedef long double ld;

set<pair<ll, ll>, less<pair<ll, ll> > > S;
ll n, m;
pair<ll, ll> V[200005];
int L[200005], R[200005];

ll area(int x, int y, int z)
{
    return abs(V[x].first*V[y].second + V[y].first*V[z].second + V[z].first*V[x].second-
               V[z].first * V[y].second - V[y].first*V[x].second - V[x].first*V[z].second);
}

int main()
{
    cin>>n>>m;
    for (int i=1; i<=n+1; i++)
    {
        cin>>V[i].first>>V[i].second;
    }
    for (int i=2; i<=n; i++)
    {
        S.insert({area(i-1, i, i+1), i});
        L[i]=i-1;
        R[i]=i+1;
    }
    for (int i=1; i<=n-m; i++)
    {
        ll x = S.begin()->second;
        cout<<x-1<<endl;
        S.erase(S.begin());
        if (L[L[x]]!=0)
            S.erase(S.find({area(L[L[x]], L[x], x), L[x]}));
        if (R[R[x]]!=0)
            S.erase(S.find({area(x, R[x], R[R[x]]), R[x]}));
        R[L[x]]=R[x];
        L[R[x]] = L[x];
        if (L[L[x]]!=0)
            S.insert({area(L[L[x]], L[x], R[x]), L[x]});
        if (R[R[x]]!=0)
            S.insert({area(L[x], R[x], R[R[x]]), R[x]});
    }
    return 0;
}