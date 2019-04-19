#include <bits/stdc++.h>
#define MOD 1000000007

using namespace std;

string s;
int nr;

int main()
{
    cin>>s;
    for (int i=0; i<s.size(); i++)
    {
        if ('a'<=s[i] && s[i]<='z' && strchr("aeiou", s[i]))
            nr++;
        if ('0'<=s[i] && s[i]<='9' && (s[i]-'0')%2==1)
            nr++;
    }
    cout<<nr;
    return 0;
}