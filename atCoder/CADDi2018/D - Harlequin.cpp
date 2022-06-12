#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

ll n, V[100005], res;


int main() {
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin>>V[i];
    }
    sort(V+1, V+n+1);
    for (int i=1; i<=n; i++)
    {
        ll x = V[i]-V[i-1];
        if (x%2==1)
        {
            res ^= (n-i+1);
        }
    }
    if (res==0)
        cout<<"second";
    else
        cout<<"first";
    return 0;
}