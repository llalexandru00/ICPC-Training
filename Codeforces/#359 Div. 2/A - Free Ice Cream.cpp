#include <bits/stdc++.h>

using namespace std;

long long n, k, x, dis;
char c;

int main()
{
    cin>>n>>k;
    for (int i=1; i<=n; i++)
    {
        cin>>c>>x;
        if (c=='+')
            k+=x;
        else
        {
            if (k-x<0)
                dis++;
            else
                k-=x;
        }
    }
    cout<<k<<" "<<dis;
    return 0;
}