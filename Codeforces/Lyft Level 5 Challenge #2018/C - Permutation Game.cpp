#include <bits/stdc++.h>
#define MOD 1000000007
#define NMAX 2000000

using namespace std;

typedef long long ll;
typedef long double ld;

int n, V[100005], S[100005], P[100005];

void put(int wh, int val)
{
    int zero=0, unu=0;
    for (int i=wh+val; i<=n; i+=val)
    {
        if (V[i]<val) continue;
        if (S[i] == 1) unu=1;
        else zero = 1;
    }
    for (int i=wh-val; i>=1; i-=val)
    {
        if (V[i]<val) continue;
        if (S[i] == 1) unu=1;
        else zero = 1;
    }
    if (!zero && !unu)
        S[wh] = 0;
    else if (zero && !unu)
        S[wh] = 1;
    else if (!zero && unu)
        S[wh] = 0;
    else
        S[wh] = 1;
}

int main()
{
    cin>>n;
    for (int i=1; i<=n; i++)
    {
        cin>>V[i];
        P[V[i]] = i;
    }
    for (int i=n; i>=1; i--)
    {
        put(P[i], i);
    }
    for (int i=1; i<=n; i++)
    {
        if (S[i]==0)
            cout<<"B";
        else
            cout<<"A";
    }
    return 0;
}