#include <bits/stdc++.h>

using namespace std;

int n, k, nr, x;

int main()
{
    cin>>n>>k;
    for (int i=1; i<=n; i++)
    {
        cin>>x;
        if (x+k<=5)
        {
            nr++;
        }
    }
    cout<<nr/3;
    return 0;
}