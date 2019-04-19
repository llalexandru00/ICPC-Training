#include <bits/stdc++.h>
#define INF (1e9)+5

using namespace std;

int n, k, V[200005];

int main()
{
    cin>>n>>k;
    for(int i=1; i<=n; i++)
        cin>>V[i];
    sort(V+1, V+n+1);
    if (k==0)
    {
        if (V[1]==1)
            cout<<-1;
        else
            cout<<1;
        return 0;
    }
    if (V[k]==V[k+1])
        cout<<-1;
    else
        cout<<V[k];
    return 0;
}