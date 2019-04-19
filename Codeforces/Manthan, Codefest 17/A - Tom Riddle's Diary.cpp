#include <bits/stdc++.h>

using namespace std;

int n;
set <string> S;
string s;

int main() {
    cin>>n;
    for (int i=1; i<=n; i++)
    {
        cin>>s;
        if (S.find(s)==S.end())
        {
            cout<<"NO\n";
            S.insert(s);
        } else
        {
            cout<<"YES\n";
        }
    }
    return 0;
}