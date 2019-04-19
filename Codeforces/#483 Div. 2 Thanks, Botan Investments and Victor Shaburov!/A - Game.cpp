#include <bits/stdc++.h>
#define INF (1e9)+5
#define eps 1e-6

using namespace std;

typedef long long ll;

ll n, V[1005];

int main()
{
    cin>>n;
    for (int i=1; i<=n; i++)
        cin>>V[i];
    sort(V+1, V+n+1);
    cout<<V[n/2+n%2];
    return 0;
}