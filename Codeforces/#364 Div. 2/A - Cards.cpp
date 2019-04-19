#include <bits/stdc++.h>
#define NM 1e6

using namespace std;

int n, sum, v[105], viz[105], each;

int main()
{
    cin>>n;
    for (int i=1; i<=n; i++)
    {
        cin>>v[i];
        sum+=v[i];
    }
    each=sum/(n/2);
    for (int i=1; i<=n; i++)
    {
        if (viz[i]==1)continue;
        for (int j=i+1; j<=n; j++)
        {
            if (viz[j]==1)continue;
            if (v[i]+v[j]==each)
            {
                viz[i]=1;
                viz[j]=1;
                cout<<i<<" "<<j<<'\n';
                break;
            }
        }
    }
    return 0;
}