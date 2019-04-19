#include <bits/stdc++.h>
#define eps 1e-6
#define inf (ll)1e9

using namespace std;

typedef long long ll;
typedef long double ld;

bool prime(ll x)
{
    if (x==2)
        return 1;
    if (x%2==0 || x==0 || x==1)
        return 0;
    for (int i=3; i*i<=x; i+=2)
        if (x%i==0)
            return 0;
    return 1;
}

int main()
{
    int x, y, t;
    cin>>t;
    while (t--)
    {
        cin>>x>>y;
        for (int i=x; i<=y; i++)
        {
            if (prime(i))
                cout<<i<<endl;
        }
        cout<<endl;
    }
    return 0;
}