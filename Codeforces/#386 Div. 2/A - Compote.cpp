#include <bits/stdc++.h>

using namespace std;

int a, b, c, nr;

int main()
{
    cin>>a>>b>>c;
    while (a>=0 && b>=0 && c>=0)
    {
        a-=1;
        b-=2;
        c-=4;
        nr+=7;
    }
    cout<<nr-7;
    return 0;
}