#include <bits/stdc++.h>

using namespace std;

struct problem{int val, idx;} a[2001];
vector <int> sol;
int n, k, tot;

bool comp(problem a, problem b)
{
    return a.val>b.val;
}

int main()
{
    cin>>n>>k;
    for (int i=1; i<=n; i++)
    {
        cin>>a[i].val;
        a[i].idx=i;
    }
    sort(a+1, a+n+1, comp);

    sol.push_back(0);
    for (int i=1; i<=k; i++)
    {
        tot += a[i].val;
        sol.push_back(a[i].idx);
    }

    cout<<tot<<'\n';
    if (k==1)
    {
        cout<<n;
        return 0;
    }
    sort(sol.begin(), sol.end());
    for (int i=1; i<sol.size()-1; i++)
    {
        cout<<sol[i]-sol[i-1]<<" ";
    }
    cout<<n-sol[sol.size()-2];
    return 0;
}
