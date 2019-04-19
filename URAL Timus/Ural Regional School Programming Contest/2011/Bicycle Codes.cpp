#include <bits/stdc++.h>
#define eps 1e-6
#define inf (ll)1e9

using namespace std;

typedef long long ll;
typedef long double ld;

ll n, a, b;

int main()
{
    cin>>a>>b;
    if (a%2==0 || b%2==1)
        cout<<"yes";
    else
        cout<<"no";
    return 0;
}