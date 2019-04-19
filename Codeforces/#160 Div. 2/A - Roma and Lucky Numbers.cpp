#include <bits/stdc++.h>

using namespace std;

int n, k, x, nr, total;

int main() {
    cin>>n>>k;
    for (int i=1; i<=n; i++)
    {
        nr=0;
        cin>>x;
        while (x)
        {
            if (x%10==4 || x%10==7)
                nr++;
            x/=10;
        }
        if (nr<=k)
            total++;
    }
    cout<<total;
    return 0;
}