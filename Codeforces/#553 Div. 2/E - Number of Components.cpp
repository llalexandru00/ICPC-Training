#include <bits/stdc++.h>
#define eps 1e-6
#define inf (ll)1e9

using namespace std;

typedef long long ll;
typedef long double ld;

ll n, V[100005], tot;

int main()
{
    cin>>n;
    for (int i=1; i<=n; i++)
    {
        cin>>V[i];
    }
    for (int i=1; i<=n; i++)
    {
        if (V[i]>V[i-1])
            tot += (V[i]-V[i-1])*(n-V[i]+1);
        else
            tot += V[i]*(V[i-1]-V[i]);
    }
    cout<<tot;
    return 0;
}