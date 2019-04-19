#include <bits/stdc++.h>
#define INF (1e9)+5

using namespace std;

unsigned long long n, k, V[105];

vector <unsigned long long> P[105], S;
unsigned long long Viz[105];
unsigned long long gata=0;

void DFS(unsigned long long x)
{
    if (gata)
        return;
    Viz[x]=1;
    S.push_back(x);
    for (int i=0; i<P[x].size(); i++)
        if(Viz[P[x][i]]==0)
            DFS(P[x][i]);
    if (gata)
        return;
    if (S.size()==n)
    {
        gata=1;
        for (int i=0; i<S.size(); i++)
            cout<<V[S[i]]<<" ";
    }
    S.pop_back();
}

int main()
{
    cin>>n;
    for (int i=1; i<=n; i++)
        cin>>V[i];
    for (int i=1; i<=n; i++)
    {
        for (int j=1; j<=n; j++)
        {
            if (i==j) continue;
            if (V[i]*2==V[j])
            {
                P[i].push_back(j);
            }
            if (V[i]==3*V[j])
            {
                P[i].push_back(j);
            }
        }
    }
    for (int i=1; i<=n; i++)
    {
        for(int j=1; j<=n; j++)
            Viz[j]=0;
        DFS(i);
    }
    return 0;
}