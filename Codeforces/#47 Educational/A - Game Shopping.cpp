#include <bits/stdc++.h>

using namespace std;

int n, m, V[1005], C[1005], nr;

int main() {
    cin>>n>>m;
    for (int i=1; i<=n; i++)
        cin>>V[i];
    for (int i=1; i<=m; i++)
        cin>>C[i];

    int b = 1;
    for (int i=1; i<=n; i++)
    {
        if (C[b]>=V[i])
            nr++, b++;
    }

    cout<<nr;
    return 0;
}