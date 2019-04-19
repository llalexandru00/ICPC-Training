#include <bits/stdc++.h>
#define MOD 998244353

using namespace std;
typedef long long ll;
ll t, n, m;
vector<ll> V[300005];
ll A[300005], Viz[300005];
ll ok, imp, par;

void DFS(int x, int v)
{
    if (A[x]!=-1 && A[x]!=v)
        ok=1;
    A[x]=v;
    Viz[x]=1;
    if (v==1) imp++;
    else par++;
    for (auto i : V[x])
    {
        if (!Viz[i])
            DFS(i, v^1);
        else
            if (A[i]!=(v^1))
                ok=1;
    }

}

ll P[300005];

int main()
{
    ios_base::sync_with_stdio(false);
    //freopen("fractzii.in", "r", stdin);
    //freopen("fractzii.out", "w", stdout);
    P[0]=1;
    for (int i=1; i<=300000; i++)
        P[i]=(P[i-1]*2)%MOD;
    scanf("%lld", &t);
    while (t--)
    {
        scanf("%lld %lld", &n, &m);
        for(int i=1; i<=n; i++)
            V[i].clear();

        for(int i=1; i<=m; i++)
        {
            ll x, y;
            scanf("%lld %lld", &x, &y);
            V[x].push_back(y);
            V[y].push_back(x);
        }

        ll total=1;
        for (int i=1; i<=n; i++)
            A[i]=-1;
        for (int i=1; i<=n; i++)
            Viz[i]=0;
        ok=0;
        for (int i=1; i<=n; i++)
        {
            if (!Viz[i])
            {
                imp=0; par=0;
                DFS(i, 0);
                total *= P[imp]+P[par];
                total %= MOD;
            }
        }
        if (ok)
        {
            printf("0\n");
            continue;
        }
        printf("%d\n", total);
    }
    return 0;
}