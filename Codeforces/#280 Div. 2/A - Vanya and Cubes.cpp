#include <bits/stdc++.h>

using namespace std;

int x, i, n;

int main()
{
    cin>>n;
    while (x<=n)
    {
        i++;
        x+=i*(i+1)/2;
    }
    cout<<i-1;
    return 0;
}