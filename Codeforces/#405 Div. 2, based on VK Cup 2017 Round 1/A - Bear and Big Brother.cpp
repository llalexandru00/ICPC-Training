#include <bits/stdc++.h>

using namespace std;

int a, b, i;

int main()
{
    cin>>a>>b;
    while (a<=b)
    {
        i++;
        a*=3;
        b*=2;
    }
    cout<<i;
    return 0;
}