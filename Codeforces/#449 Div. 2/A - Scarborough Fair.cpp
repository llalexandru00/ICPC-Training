#include <iostream>

using namespace std;

int n, m, i, j, l, r;
char c1, c2;
string s;

int main()
{
    cin>>n>>m;
    cin>>s;
    for (i=1; i<=m; i++)
    {
        cin>>l>>r>>c1>>c2;
        for (j=l-1; j<=r-1; j++)
        {
            if (s[j]==c1)
                s[j]=c2;
        }
    }
    cout<<s;
    return 0;
}