#include <bits/stdc++.h>

using namespace std;

int n, t, x, y, pa, pb, ta, tb;

int main() {
    cin>>n;
    while (n--)
    {
        cin>>t>>x>>y;
        if (t==1)
            pa+=x, ta+=x+y;
        else
            pb+=x, tb+=x+y;
    }
    if (pa*2>=ta)
        cout<<"LIVE\n";
    else
        cout<<"DEAD\n";
    if (pb*2>=tb)
        cout<<"LIVE\n";
    else
        cout<<"DEAD\n";
    return 0;
}