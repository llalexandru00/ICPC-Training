#include <bits/stdc++.h>
#define INF (1e9)+5

using namespace std;

int n, x, maxim, nr, last;

map<int, int> M;
map<int, vector<int> > Pos;

int main()
{
    cin>>n;
    for (int i=1; i<=n; i++)
    {
        cin>>x;
        if (M.find(x-1)!=M.end())
            M[x]=M[x-1]+1;
        else
            M[x]=1;
        Pos[x].push_back(i);
    }
    for (map<int, int>::iterator it = M.begin(); it!=M.end(); it++)
    {
        if (it->second>maxim)
        {
            maxim=it->second;
            nr=it->first;
        }
    }
    cout<<maxim<<'\n';
    last=-1;
    for (int i=nr-maxim+1; i<=nr; i++)
    {
        int k=0;
        while (Pos[i][k]<=last)
            k++;
        cout<<Pos[i][k]<<" ";
        last=Pos[i][k];
    }
    return 0;
}