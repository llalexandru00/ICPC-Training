#include <iostream> 

using namespace std;

string s;
int ok=0, i;

int main()
{
    cin>>s;
    for (i=0; i<s.size(); i++)
        if (s[i]=='H' || s[i]=='Q' || s[i]=='9')
            ok=1;
    if (ok)
        cout<<"YES";
    else
        cout<<"NO";
    return 0;
}