#include <iostream>
#include <cstring>
#include <vector>
#include <algorithm>

using namespace std;

string s;
int i;
vector <int> V;

int main()
{
    cin>>s;
    for (i=0; i<s.size(); i++)
        if ('0'<=s[i] && s[i]<='9')
            V.push_back(s[i]-'0');
    sort(V.begin(), V.end());
    for (i=0; i<V.size()-1; i++)
        cout<<V[i]<<"+";
    cout<<V[V.size()-1];
    return 0;
}