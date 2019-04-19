#include <bits/stdc++.h>

using namespace std;

int n, sum, maxim=-1e9, V[105];

int main()
{
    cin>>n;
    for (int i=1; i<=n; i++)
    {
        cin>>V[i];
        if (V[i]>maxim)
            maxim=V[i];
    }
    for (int i=1; i<=n; i++)
    {
        sum+=maxim-V[i];
    }
    cout<<sum;
    return 0;
}