#include <bits/stdc++.h>

using namespace std;

vector <int> V[5];

int n, x;

int main()
{
    cin>>n;
    for (int i=1; i<=n; i++)
    {
        cin>>x;
        V[x-1].push_back(i);
    }
    int m = min(V[0].size(), min(V[1].size(), V[2].size()));
    cout<<m<<'\n';
    for (int i=0; i<m; i++)
    {
        cout<<V[0][i]<<" "<<V[1][i]<<" "<<V[2][i]<<'\n';
    }
    return 0;
}