#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
ll V[200005], n;
ll Ans[200005];
int main()
{
    //freopen("fractzii.in", "r", stdin);
    //freopen("fractzii.out", "w", stdout);
    cin>>n;
    for (int i=1; i<=n/2; i++)
        cin>>V[i];
    ll lastl=0, lastr=ll(1e18)+1;
    for (ll i=1, j=n; i<j; i++, j--)
    {
        if (V[i]<=lastr+lastl) {
            lastr=V[i]-lastl;
            Ans[i]=lastl;
            Ans[j]=lastr;
        }
        else
        {
            lastl=V[i]-lastr;
            Ans[i]=lastl;
            Ans[j]=lastr;
        }
    }
    for (int i=1; i<=n; i++)
    {
        cout<<Ans[i]<<" ";
    }
    return 0;
}