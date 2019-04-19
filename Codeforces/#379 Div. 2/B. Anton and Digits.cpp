#include <bits/stdc++.h>

using namespace std;

long long a, b, c, d, tot;

int main()
{
    cin>>a>>b>>c>>d;
    while (a && c && d)
    {
        tot+=256;
        a--;
        c--;
        d--;
    }
    while (b && a)
    {
        tot+=32;
        a--;
        b--;
    }
    cout<<tot;
    return 0;
}