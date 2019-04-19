#include <bits/stdc++.h>
#define MOD 998244353
#define NMAX 2000000

using namespace std;

typedef long long ll;
typedef long double ld;
typedef unsigned long long ull;

int n;
struct dat{int sum, id;} V[1005];

bool comp(dat a, dat b)
{
    if (a.sum==b.sum)
        return a.id<b.id;
    return a.sum>b.sum;
}

int main()
{
    int a, b, c, d;
    cin>>n;
    for (int i=1; i<=n; i++)
    {
        cin>>a>>b>>c>>d;
        V[i].sum = a+b+c+d;
        V[i].id = i;
    }
    sort(V+1, V+n+1, comp);
    for (int i=1; i<=n; i++)
        if (V[i].id==1)
        {
            cout<<i;
            return 0;
        }
    return 0;
}