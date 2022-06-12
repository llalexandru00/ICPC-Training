#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

ll n, p, res;
vector <pair<ll, ll> > V;

int main() {
    cin>>n>>p;
    for (ll i=2; i*i <=p; i++)
    {
        if (p%i==0)
        {
            int m=0;
            while (p%i==0)
            {
                m++;
                p/=i;
            }
            V.push_back({i, m});
        }
    }
    if (p>1)
        V.push_back({p, 1});
    ll res=1;
    for (auto i : V)
    {
        if (i.second>=n)
            res *= pow(i.first, (i.second/n));
    }
    cout<<res;
    return 0;
}