#include <bits/stdc++.h>

using namespace std;

int n, state, nr, lng;
string s;
vector <int> V;

int main()
{
    cin>>n;
    cin>>s;
    state=0;
    for(int i=0; i<s.size(); i++)
    {
        if (s[i]=='B' && state==0)
        {
            state=1;
            lng=1;
        }
        else if (s[i]=='W' && state==1)
        {
            state=0;
            V.push_back(lng);
        }
        else if (s[i]=='B')
        {
            lng++;
        }
    }
    if (state==1)
    {
        V.push_back(lng);
    }
    cout<<V.size()<<'\n';
    for (int i=0; i<V.size(); i++)
        cout<<V[i]<<" ";
    return 0;
}