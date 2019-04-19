#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

ll n, m, SP[200005];

ll cautbin(ll x)
{
    ll st=1, dr=n;
    while (st<=dr)
    {
        ll mijl=(st+dr)/2;
        if (SP[mijl]<x)
            st=mijl+1;
        else
            dr=mijl-1;
    }
    if (SP[st]<x)
        return st;
    else
        return dr;
}

int main() {
    cin>>n>>m;
    for (ll i=1; i<=n; i++)
    {
        ll x;
        cin>>x;
        SP[i] = SP[i-1]+x;
    }
    while (m--)
    {
        ll x;
        cin>>x;
        ll dorm = cautbin(x);
        cout<<dorm+1<<" "<<x-SP[dorm]<<'\n';
    }
    return 0;
}