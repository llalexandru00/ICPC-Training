#include <iostream>

using namespace std;

int n,lng,ans;
string s;

int main() {
    cin>>n;
    cin>>s;
    lng=0;
    for (int i=0; i<s.size(); i++)
    {
        if (s[i]=='x')
            lng++;
        else
            lng=0;
        if (lng==3)
        {
            lng--;
            ans++;
        }
    }
    cout<<ans;
    return 0;
}