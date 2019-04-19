#include <bits/stdc++.h>

using namespace std;

int n, m, V[105];

int main() {
    cin>>n>>m;
    for (int i=1; i<=n; i++)
        cin>>V[i];
    sort(V+1, V+n+1, [] (int a, int b) {return a>b;});
    int i=1;
    while (m>0)
        m -= V[i++];
    cout<<i-1;
    return 0;
}