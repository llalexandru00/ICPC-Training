#include <bits/stdc++.h>

using namespace std;

int n, k, x;
map<int, int> M;
vector<int>V;

int main()
{
    cin>>n>>k;
    for (int i=1; i<=n; i++)
    {
        cin>>x;
        if (M.find(x)==M.end())
        {
            M[x]=1;
            V.push_back(i);
        }
    }
    if (M.size()>=k)
    {
        cout<<"YES"<<'\n';
        for (int i=0; i<k; i++)
        {
            cout<<V[i]<<" ";
        }
    }
    else
    {
        cout<<"NO";
    }
    return 0;
}