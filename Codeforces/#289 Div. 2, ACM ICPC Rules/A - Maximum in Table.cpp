#include <bits/stdc++.h>

using namespace std;

int n, P[100][100];

int main()
{
    cin>>n;
    P[1][1]=1;
    for (int i=1; i<=n; i++)
    {
        for (int j=1; j<=n; j++)
        {
            if (i==1 && j==1) continue;
            P[i][j]=P[i-1][j]+P[i][j-1];
        }
    }
    cout<<P[n][n];
    return 0;
}