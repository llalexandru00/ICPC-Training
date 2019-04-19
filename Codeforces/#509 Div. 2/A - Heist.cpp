#include <bits/stdc++.h>

using namespace std;

int x, n, maxim, minim=1e9;

int main() {
    cin>>n;
    for (int i=1; i<=n; i++)
    {
        cin>>x;
        if (x<minim)
            minim=x;
        if (x>maxim)
            maxim=x;
    }
    cout<<(maxim-minim+1)-n;
    return 0;
}