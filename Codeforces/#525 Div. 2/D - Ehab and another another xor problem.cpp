#include <bits/stdc++.h>
#pragma warning(disable: 4996)
#define INF (1e9)
#define NMAX 29

using namespace std;
typedef long long ll;

ll n, pre, act;
vector<ll> V;

ll query(ll x, ll y)
{
    ll a;
    cout<<"?"<<" "<<x<<" "<<y<<'\n';
    cout.flush();
    cin>>a;
    return a;
}

void psol(ll a, ll b)
{
    cout<<"!"<<" "<<a<<" "<<b<<'\n';
    cout.flush();
}

int main() {
	ios_base::sync_with_stdio(false);
    ll x=0, y=0, a=0, b=0,s, s2;
    s = query(x, y);
    for (ll i=(1<<NMAX); i>=1; i/=2)
    {
        s2 = query(x+i, y+i);
        if (s2!=s)
        {
            if (s2==1)
            {
                b+=i;
                y+=i;
            }
            else
            {
                a+=i;
                x+=i;
            }
            s=query(x, y);
        }
        else
        {
            V.push_back(i);
            s=s2;
        }
    }
    for (ll i=0; i<V.size(); i++)
    {
        s = query(x+V[i], y);
        if (s==-1)
        {
            a+=V[i];
            b+=V[i];
        }
    }
    psol(a, b);
	return 0;
}