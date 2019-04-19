#include <bits/stdc++.h>

using namespace std;

string s, t, d;
map<char, char> M;

int main() {
    cin>>s>>t;
    for (int i=0; i<s.size(); i++)
    {
        M[s[i]] = t[i];
    }
    cin>>d;
    for (auto i : d)
    {
        if ('A'<=i && i<='Z')
            cout<<char(M[i+32]-32);
        else
            if (M.find(i)==M.end())
                cout<<i;
            else
                cout<<M[i];
    }
    return 0;
}