#include <bits/stdc++.h>

using namespace std;

string s;
int v[5], sum;

int main()
{
    cin>>v[1]>>v[2]>>v[3]>>v[4];
    cin>>s;
    for (int i=0; i<s.size(); i++)
        sum+=v[s[i]-'0'];
    cout<<sum;
    return 0;
}