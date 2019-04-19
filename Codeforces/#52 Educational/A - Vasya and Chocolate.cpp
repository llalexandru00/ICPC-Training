#include <bits/stdc++.h>

using namespace std;

long long t, s, a, b, c;

int main() {
    cin>>t;
    while (t--)
    {
        cin>>s>>a>>b>>c;
        cout<<(s/c) + s/c/a*b<<'\n';
    }
    return 0;
}