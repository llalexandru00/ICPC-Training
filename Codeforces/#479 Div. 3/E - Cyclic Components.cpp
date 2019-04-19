#include <bits/stdc++.h>
#define INF (1e9)+5

using namespace std;

int tot, n, m;
vector <int> V[200005];
bool Viz[200005];

bool DFS(int x)
{
    bool ok;
    if (V[x].size()==2)
        ok=1;
    else
        ok=0;
    Viz[x]=1;
    for (int i=0; i<V[x].size(); i++)
    {
        if (!Viz[V[x][i]])
        {
            bool z= DFS(V[x][i]);
            ok = ok && z;
        }
    }
    return ok;
}

int main()
{
    int x, y;
    cin>>n>>m;
    for (int i=1; i<=m; i++)
    {
        cin>>x>>y;
        V[x].push_back(y);
        V[y].push_back(x);
    }
    for (int i=1; i<=n; i++)
    {
        if (!Viz[i])
        {
            tot += DFS(i);
        }
    }
    cout<<tot;
    return 0;
}