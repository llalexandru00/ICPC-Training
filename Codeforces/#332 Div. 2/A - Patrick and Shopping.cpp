#include <bits/stdc++.h>

using namespace std;

int a, b, c, minim=1e9;

int main()
{
    cin>>a>>b>>c;
    if (a+b+c<minim)
        minim=a+b+c;
    if (a+a+b+b<minim)
        minim=a+a+b+b;
    if (a+a+c+c<minim)
        minim=a+a+c+c;
    if (b+b+c+c<minim)
        minim=b+b+c+c;
    cout<<minim;
    return 0;
}