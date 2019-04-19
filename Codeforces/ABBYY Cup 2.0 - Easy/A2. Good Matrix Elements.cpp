#include <bits/stdc++.h>

using namespace std;

long long n, s, x;

int main() {
    cin>>n;
    for (int i=1; i<=n; i++)
    {
        for (int j=1; j<=n; j++)
        {
            cin>>x;
            if (i==j || i+j == n+1 || i==n/2+1 || j==n/2+1)
                s+=x;
        }
    }
    cout<<s;
    return 0;
}