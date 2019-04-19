#include <bits/stdc++.h>

using namespace std;


int n, m, s, x;

int main()
{
    cin>>n>>m;

    for (int i=1; i<=n; i++)
    {
        cin>>x;
        s+=x;
    }
    s=abs(s);
    cout<<s/m + ((s%m)?1:0);
    return 0;
}