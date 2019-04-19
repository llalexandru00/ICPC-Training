#include <bits/stdc++.h>
#define inf 1e9
#define eps 1e-6
#define mod 1000000007
#define pi 3.14159265359

using namespace std;

typedef long long ll;
typedef long double ld;

ll n, minim=1e9;
string s;

ll dist(ll x, ll y)
{
    if (x<y)
        return min(y-x, x-'A' + 'Z' - y+1);
    else
        return min(x-y, 'Z' - x + y - 'A'+1);
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    cin>>n;
    cin>>s;
    for (ll i=0; i<s.size()-3; i++)
    {
        ll a = dist(s[i], 'A');
        ll b = dist(s[i+1], 'C');
        ll c = dist(s[i+2], 'T');
        ll d = dist(s[i+3], 'G');
        minim=min(minim, a+b+c+d);
    }
    cout<<minim;
    return 0;
}