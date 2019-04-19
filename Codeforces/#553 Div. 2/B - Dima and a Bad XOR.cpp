#include <bits/stdc++.h>
#define inf 1e9
#define eps 1e-6
#define mod 1000000007
#define pi 3.14159265359

using namespace std;

typedef long long ll;
typedef long double ld;

int n, m;
int M[505][505], modif, Viz[505], l;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    cin>>n>>m;
    for (int i=1; i<=n; i++)
    {
        int ok=0;
        for (int j=1; j<=m; j++)
        {
            cin>>M[i][j];
            if (j>=2 && M[i][j]!=Viz[i])
            {
                modif=j;
                ok++;
            }
            else if (j==1)
                Viz[i]=M[i][j], ok=1;
        }
        if (ok>1)
        {
            l=i;
        }
    }
    if (l==0)
    {
        int ans = 0;
        for (int i=1; i<=n; i++)
            ans ^= M[i][1];
        if (ans==0)
            cout<<"NIE";
        else
        {
            cout<<"TAK"<<endl;
            for (int i=1; i<=n; i++)
                cout<<1<<" ";
        }
    } else
    {
        cout<<"TAK"<<endl;
        int ans = 0;
        for (int i=1; i<=n; i++)
        {
            ans ^= M[i][1];
        }
        if (ans!=0)
        {
            for (int i=1; i<=n; i++)
                cout<<1<<" ";
        } else
        {
            for (int i=1; i<l; i++)
                cout<<1<<" ";
            cout<<modif<<" ";
            for (int i=l+1; i<=n; i++)
                cout<<1<<" ";
        }

    }

    return 0;
}