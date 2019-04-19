#include <bits/stdc++.h>

using namespace std;

string s[1005];

int n, ok;

int main()
{
    cin>>n;
    for (int i=1; i<=n; i++)
    {
        cin>>s[i];
        if (s[i][0]=='O' && s[i][1]=='O' || s[i][3]=='O' && s[i][4]=='O')
            ok=1;
    }
    if (ok==0)
        cout<<"NO";
    else
    {
        cout<<"YES"<<'\n';
        ok=0;
        for (int i=1; i<=n; i++)
        {
            if (s[i][0]=='O' && s[i][1]=='O' && ok==0)
            {
                cout<<"++|"<<s[i][3]<<s[i][4]<<'\n';
                ok=1;
            }
            else if (s[i][3]=='O' && s[i][4]=='O' && ok==0)
            {
                cout<<s[i][0]<<s[i][1]<<"|++"<<'\n';
                ok=1;
            }
            else
            {
                cout<<s[i]<<'\n';
            }
        }
    }
    return 0;
}