#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
typedef long double ld;

const ll INF = 1e18;
const ld eps = 1e-9;
const ll mod = (1e9)+7;

ll M[50][5][5], M2[50][5][5], n;

ll hanoi(int i, int x, int y)
{
    if (i==2 && x==2 && y==3)
        int p = 0;
    ll z = 6-x-y;
    ll ans = M2[i-1][x][y] + M[1][x][z] + M2[i-1][y][x] + M[1][z][y] + M2[i-1][x][y];
    return min(M2[i-1][x][z] + M[1][x][y] + M2[i-1][z][y], ans);
}

int main()
{
    ios_base::sync_with_stdio(false);
    for (int i=1; i<=3; i++)
        for (int j=1; j<=3; j++)
            cin>>M[1][i][j];

    cin>>n;
    for (int i=1; i<=n; i++)
    {
        for (int j=1; j<=3; j++)
            for (int k=1; k<=3; k++)
                if (j!=k)
                    M2[i][j][k] = hanoi(i, j, k);
    }
    cout<<M2[n][1][3];
    return 0;
}