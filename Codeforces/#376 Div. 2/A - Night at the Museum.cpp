#include <bits/stdc++.h>
#define NM 1e6

using namespace std;

int M[500][500], tot;
string s;

int main()
{
    for (int i='a'; i<='z'; i++)
    {
        for (int j='a'; j<='z'; j++)
        {
            M[i][j]=min(abs(i-j), 26-abs(i-j)) ;
        }
    }
    cin>>s;
    char act='a';
    for (int i=0; i<s.size(); i++)
    {
        tot+=M[act][s[i]];
        act=s[i];
    }
    cout<<tot;
    return 0;
}