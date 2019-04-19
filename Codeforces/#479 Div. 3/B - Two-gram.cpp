#include <bits/stdc++.h>
#define INF (1e9)+5

using namespace std;

map <string, int> M;

int n, k, maxim;
string s, c, nr;

int main()
{
    cin>>n;
    cin>>s;
    for (int i=0; i<s.size()-1; i++)
    {
        c = s[i];
        c += s[i+1];
        M[c]++;
    }
    for (map <string, int>::iterator j=M.begin(); j!=M.end(); j++)
    {
        if (j->second>maxim)
        {
            maxim=j->second;
            nr=j->first;
        }
    }
    cout<<nr;
    return 0;
}