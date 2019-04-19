#include <bits/stdc++.h>

using namespace std;

int n, m;
double minim=1e9, x, y ;

int main()
{
    cin>>n>>m;
    for (int i=1; i<=n; i++)
    {
        cin>>x>>y;
        double tot = x/y;
        if (tot<minim)
            minim=tot;
    }
    cout<<setprecision(8)<<minim*m;
    return 0;
}