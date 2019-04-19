#include <bits/stdc++.h>

using namespace std;

int n, w, x, lef, righ, s, minim=1e9, maxim;

int main() {
    cin>>n>>w;
    for (int i=1; i<=n; i++) {
        cin >> x;
        s += x;
        if (s > maxim)
            maxim = s;
        if (s < minim)
            minim = s;
    }
    lef = max(0, -minim);
    righ = max(-1, w-maxim);
    cout<<max(0, righ-lef+1);
    return 0;
}