#include <bits/stdc++.h>

using namespace std;

int t, a, b, ok;
string s;

int main()
{
    cin>>t;
    while (t--)
    {
        cin>>s>>a>>b;
        if (a>=2400 && a<b)
            ok=1;
    }
    if (ok)
        cout<<"YES";
    else
        cout<<"NO";
    return 0;
}