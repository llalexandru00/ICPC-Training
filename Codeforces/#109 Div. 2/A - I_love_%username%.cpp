#include <bits/stdc++.h>

using namespace std;

int n, x, nr, maxim=-1e9, minim=1e9;

int main()
{
    cin>>n;
    for (int i=1; i<=n; i++)
    {
        cin>>x;
        if (x>maxim)
        {
            maxim=x;
            if (i!=1)
                nr++;
        }
        if (x<minim)
        {
            minim=x;
            if (i!=1)
                nr++;
        }
    }
    cout<<nr;
	return 0;
}