#include <bits/stdc++.h>

using namespace std;

int n,m, x, F[11], nr;
int V[11];

int main() {
    cin>>n>>m;
    for (int i=1; i<=n; i++)
    {
        cin>>x;
        F[x]=i;
    }

    for (int i=1; i<=m; i++)
    {
        cin>>x;
        if (F[x])
            V[++nr]=x;
    }

    sort(V+1, V+nr+1, [](int a, int b) {
            return F[a]<F[b];
    });
    for (int i=1; i<=nr; i++)
        cout<<V[i]<<" ";
    return 0;
}