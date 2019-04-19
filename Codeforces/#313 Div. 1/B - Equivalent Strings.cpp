#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
typedef long double ld;

const ll INF = 1e18;
const ld eps = 1e-9;
const ll mod = (1e9)+7;

string a, b;

bool comp(int l1, int r1, int l2, int r2)
{
    for (int i=l1, j=l2; i<=r1, j<=r2; i++, j++)
        if (a[i]!=b[j])
            return 0;
    return 1;
}

bool equiv(int l1, int r1, int l2, int r2)
{
    if (l1==r1 || l2==r2)
    {
        char c1= a[l1];
        char c2 = b[l2];
        return c1==c2;
    }
    if (comp(l1, r1, l2, r2))
        return 1;
    if ((r1-l1+1)%2==0 && (r2-l2+1)%2==0)
        return (equiv(l1, (l1+r1)/2, (l2+r2)/2+1, r2) && equiv((l1+r1)/2+1, r1, l2, (l2+r2)/2)) ||
        (equiv(l1, (l1+r1)/2, l2, (l2+r2)/2)) && equiv((l1+r1)/2+1, r1, (l2+r2)/2+1, r2);
    return 0;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin>>a>>b;
    if(equiv(0, a.size()-1, 0, b.size()-1))
        cout<<"YES";
    else
        cout<<"NO";
    return 0;
}