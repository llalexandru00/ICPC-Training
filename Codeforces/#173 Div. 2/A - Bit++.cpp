#include <iostream>
#include <cstring>

using namespace std;

int n, i, x;
char s[200];

int main()
{
    cin>>n;
    for (i=1; i<=n; i++)
    {
        cin>>s;
        if (strchr(s, '+'))
            x++;
        else
            x--;
    }
    cout<<x;
    return 0;
}