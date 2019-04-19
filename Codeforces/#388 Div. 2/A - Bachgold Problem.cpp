#include <bits/stdc++.h>

using namespace std;

int n, i;

int main()
{
    cin>>n;
    cout<<n/2<<'\n';
    if (n%2==0)
    {
        for (i=1; i<=n/2; i++)
            cout<<2<<" ";
    }
    else
    {
        for (i=1; i<n/2; i++)
            cout<<2<<" ";
        cout<<3;
    }
    return 0;
}