#include <iostream>
#include <vector>

using namespace std;

vector < pair<char, int> > V;

int n, nr, i;
string s;

int main()
{
    cin>>n;
    cin>>s;
    
    for (i=0; i<n; i++)
    {
        if (V.empty())
            V.push_back({s[i], 1});
        else if (V[V.size()-1].first==s[i])
            V[V.size()-1].second++;
        else
            V.push_back({s[i], 1});
    }
    for (i=0; i<V.size(); i++)
        nr+=V[i].second-1;
    cout<<nr;
}