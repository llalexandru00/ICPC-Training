#include <iostream>

using namespace std;

string s;

int main()
{
    cin>>s;
    if ('a'<=s[0] && s[0]<='z')
        s[0]-=32;
    cout<<s;
}