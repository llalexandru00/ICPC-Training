#include <bits/stdc++.h>
#define MOD 1000000007

using namespace std;

long long n, k, m, x, F[105];

int main()
{
    cin>>n>>k;
    while (n--)
    {
        cin>>m;
        while (m--)
        {
            cin>>x;
            F[x]++;
        }

    }
    bool ok=1;
    for (int i=1; i<=k; i++)
        if (F[i]==0)
            ok=0;
    if (ok)
        cout<<"YES";
    else
        cout<<"NO";
    return 0;
}