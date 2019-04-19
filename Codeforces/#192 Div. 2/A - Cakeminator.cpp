#include <bits/stdc++.h>
#define MOD 1000000007

using namespace std;

string s[200];
int nr, n, m, ok;

int main()
{
    cin>>n>>m;
    for (int i=0; i<n; i++)
        cin>>s[i];
    for (int i=0; i<n; i++)
    {
        ok=1;
        for(int j=0; j<m; j++)
            if (s[i][j]=='S')
                ok=0;
        if (ok)
            for(int j=0; j<m; j++)
                s[i][j]=',';
    }

    for (int j=0; j<m; j++)
    {
        ok=1;
        for(int i=0; i<n; i++)
            if (s[i][j]=='S')
                ok=0;
        if (ok)
            for(int i=0; i<n; i++)
                s[i][j]=',';
    }
    for (int i=0; i<n; i++)
            for(int j=0; j<m; j++)
                if (s[i][j]==',')
                    nr++;

    cout<<nr;
    return 0;
}