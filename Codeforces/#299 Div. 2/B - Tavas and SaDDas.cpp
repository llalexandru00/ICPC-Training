#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
typedef long double ld;

const ll INF = 1e9;
const ld eps = 1e-9;
const ll mod = (1e9)+7;

vector <ll> V;

void bkt(ll x)
{
    if (x<=1e10)
    {
        V.push_back(x);
        bkt(x*10+4);
        bkt(x*10+7);
    }
}

int main()
{
    ll n;
    cin>>n;
    bkt(0);
    sort(V.begin(), V.end());
    for (int i=0; i<V.size(); i++)
    {
        if (V[i]==n)
        {
            cout<<i;
            return 0;
        }
    }
    return 0;
}