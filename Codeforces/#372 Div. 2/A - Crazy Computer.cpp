#include <bits/stdc++.h>

using namespace std;

int n, k, last, nr, x;

int main()
{
    cin>>n>>k;
    cin>>last;
    nr=1;
    for (int i=2; i<=n; i++)
    {
        cin>>x;
        if (x-last>k)
            nr=1;
        else
            nr++;
        last=x;
    }
    cout<<nr;
    return 0;
}