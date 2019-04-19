#include <bits/stdc++.h>

using namespace std;

int n, x;
set<int> S;

int main() {
    cin>>n;
    for (int i=1; i<=n; i++)
    {
        cin>>x;
        if (x)
            S.insert(x);
    }

    cout<<S.size();
    return 0;
}