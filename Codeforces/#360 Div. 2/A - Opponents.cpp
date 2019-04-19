#include <bits/stdc++.h>

using namespace std;

int n, m, V[105], maxim, nr;
char x, X[105];

int main()
{
    cin>>m>>n;
    cin.get();
    for (int i=1; i<=n; i++)
    {
        int s=0;
        cin.getline(X, 1005);
        for (int j=0; j<m; j++)
        {
            x=X[j];
            s+=x-'0';
        }
        V[i]=s;
    }
    nr=0;
    for (int i=1; i<=n; i++)
    {
        if (V[i]<m)
            nr++;
        else
        {
            if (nr>maxim)
                maxim=nr;
            nr=0;
        }
    }
    if (nr>maxim)
        maxim=nr;
    cout<<maxim;
    return 0;
}