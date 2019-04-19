#include <iostream>
#include <cstring>

using namespace std;

int n, i;
char s[105];

int main()
{
    cin>>n;
    for (i=1; i<=n; i++)
    {
        cin>>s;
        if (strlen(s)>10)
        {
            cout<<s[0]<<strlen(s)-2<<s[strlen(s)-1]<<'\n';
        }
        else
            cout<<s<<'\n';
    }
    return 0;
}