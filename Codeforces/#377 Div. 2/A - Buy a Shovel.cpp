#include <bits/stdc++.h>

using namespace std;

int n, k;

int main()
{
    int i;
    cin>>n>>k;
    for (i=1; i<=10; i++)
        if (i*n%10==k || i*n%10==0)
            break;
    cout<<i;
    return 0;
}