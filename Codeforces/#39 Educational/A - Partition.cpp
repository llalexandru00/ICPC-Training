#include <bits/stdc++.h>

using namespace std;

int n, s, x;


int main() {
    cin>>n;
    for (int i=1; i<=n; i++)
        cin>>x, s+=abs(x);
    cout<<s;
    return 0;
}