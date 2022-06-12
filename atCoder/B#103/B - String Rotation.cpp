#include <bits/stdc++.h>

using namespace std;

string s, t;

string RRotate(string x)
{
    char c = x[x.size()-1];
    for (int i=s.size()-1; i>=0; i--)
        x[i+1]=x[i];
    x[0]=c;
    return x;
}

int main()
{
    cin>>s>>t;
    for (int i=0; i<s.size(); i++)
    {
        if (s==t)
        {
            cout<<"Yes";
            return 0;
        }
        s = RRotate(s);
    }
    cout<<"No";
    return 0;
}
