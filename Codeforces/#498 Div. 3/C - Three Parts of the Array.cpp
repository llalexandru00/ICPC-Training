#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

deque <ll> a;

ll n, x, maxim;

int main()
{
    cin>>n;
    for (int i=1; i<=n; i++)
    {
        cin>>x;
        a.push_back(x);
    }
    ll l=0, r=0;
    while (!a.empty())
    {
        if (l<=r)
        {
            l+=a.front();
            a.pop_front();
        }
        else
        {
            r+=a.back();
            a.pop_back();
        }
        if (l==r && l>maxim)
            maxim=l;
    }
    cout<<maxim;
    return 0;
}
