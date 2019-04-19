#include <bits/stdc++.h>

using namespace std;

int n, V[5005];

int main() {
    cin>>n;
    for (int i=1; i<=n; i++)
    {
        cin>>V[i];
    }
    for (int i=1; i<=n; i++)
    {
        if (V[V[V[i]]]==i)
        {
            cout<<"YES";
            return 0;
        }
    }
    cout<<"NO";
    return 0;
}