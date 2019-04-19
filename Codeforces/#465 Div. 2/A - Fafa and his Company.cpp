#include <bits/stdc++.h>

using namespace std;

int n, nr;

int main()
{
    cin>>n;
    for (int i=1; i<n; i++)
    {
        if ((n-i)%i==0)
            nr++;
    }
    cout<<nr;
    return 0;
}