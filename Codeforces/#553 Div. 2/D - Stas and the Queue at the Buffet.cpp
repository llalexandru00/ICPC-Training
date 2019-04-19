#include <bits/stdc++.h>
#define inf 1e9
#define eps 1e-6
#define mod 1000000007
#define pi 3.14159265359

using namespace std;

typedef long long ll;
typedef long double ld;

ll n, tot;
pair<ll, ll> V[100005];

bool comp(pair<ll, ll> a, pair<ll, ll> b)
{
    ll x = a.first-a.second;
    ll y = b.first-b.second;
    return x>y;
}


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    cin>>n;
    for (ll i=1; i<=n; i++)
        cin>>V[i].first>>V[i].second;
    sort(V+1, V+n+1, comp);
    for (ll i=1; i<=n; i++)
    {
        tot += V[i].first * (i-1) + V[i].second * (n-i);
    }
    cout<<tot;
    return 0;
}