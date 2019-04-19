#include <bits/stdc++.h>

using namespace std;

int t, x, y, a, b;

int main()
{
    cin>>t;
    while (t--)
    {
        cin>>x>>y;
        if (x>y)
            a++;
        if (y>x)
            b++;
    }
    if (a>b)
        cout<<"Mishka";
    if (b>a)
        cout<<"Chris";
    if (a==b)
        cout<<"Friendship is magic!^^";
    return 0;
}