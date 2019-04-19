#include <bits/stdc++.h>

using namespace std;

int n, nr, of, x;

int main()
{
    cin>>n;
    while (n--)
    {
        cin>>x;
        if (x==-1 && of==0)
            nr++;
        if (x==-1 && of!=0)
            of--;
        if (x!=-1)
            of+=x;
    }
    cout<<nr;
    return 0;
}