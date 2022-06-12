#include <bits/stdc++.h>
#define INF 1e18

using namespace std;
typedef long long ll;

ll V[200005], dp[200005][20], dp2[200005][20], P[50];
int n;

int main() {
    ios_base::sync_with_stdio(false);
    P[0]=1;
    for (int i=1; i<=30; i++)
        P[i]=P[i-1]*4;
    scanf("%d", &n);
    for (int i=1; i<=n; i++)
        scanf("%d", &V[i]);

    for (int j=0; j<=15; j++)
    {
        dp[n][j] = 2*j;
    }

    for (int i=n-1; i>=1; i--)
    {
        for (int j=0; j<=15; j++)
        {
            ll x = V[i] * P[j];
            ll put = 0;
            while (P[put]*V[i+1]<x)
                put++;
            if (put<=15)
                dp[i][j] = dp[i + 1][put] + j * 2;
            else
            {
                dp[i][j] = dp[i+1][15] + (put-15)*(n-i)*2 + j*2;
            }
        }
    }


    for (int j=0; j<=15; j++)
    {
        dp2[1][j] = 2*j+1;
    }

    for (int i=1; i<=n; i++)
        V[i]*=2;

    for (int i=2; i<=n; i++)
    {
        for (int j=0; j<=15; j++)
        {
            ll x = V[i] * P[j];
            ll put = 0;
            while (P[put]*V[i-1]<x)
                put++;
            if (put<=15)
                dp2[i][j] = dp2[i - 1][put] + j * 2 + 1;
            else
            {
                dp2[i][j] = dp2[i-1][15] + (put-15)*(i-1)*2 + j*2 + 1;
            }
        }
    }

//    for (int i=1; i<=n; i++)
//    {
//        for (int j=0; j<=15; j++)
//            cout<<dp[i][j]<<" ";
//        cout<<'\n';
//    }

    ll minim=INF;
    for (int i=1; i<=n+1; i++)
        for (int j=0; j<=15; j++)
            if (dp2[i-1][j]+dp[i][j]<minim)
                minim=dp2[i-1][j]+dp[i][j];
    printf("%lld", minim);
    return 0;
}