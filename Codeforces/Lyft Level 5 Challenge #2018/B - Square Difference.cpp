#include <bits/stdc++.h>
#define MOD 1000000007
#define NMAX 2000000

using namespace std;

typedef long long ll;
typedef long double ld;

ll x, y;
int P[2000005];
vector<ll>Pr;

void Ciur()
{
    P[0] = P[1] = 1;
    for (ll i=2; i<=NMAX; i++)
    {
        if (P[i]==0)
        {
            Pr.push_back(i);
            for (ll j=i*i; j<=NMAX; j+=i)
                P[j]=1;
        }
    }
}

bool prime(ll x)
{
    if (x==1 || x==0)
        return 0;
    for (int i=0; Pr[i]*Pr[i]<=x; i++)
        if (x%Pr[i]==0)
            return 0;
    return 1;
}

int main()
{
    int t;
    Ciur();
    ll x, y;
    #ifndef ONLINE_JUDGE
        freopen("mexitate.in", "r", stdin);
    #else
    #endif // ONLINE_JUDGE
    cin>>t;
    while (t--)
    {
        cin>>x>>y;
        if ((x-y) == 1 && prime(x+y) || (x+y)==1 && prime(x-y))
            cout<<"YES";
        else
            cout<<"NO";
        cout<<'\n';
    }

    return 0;
}