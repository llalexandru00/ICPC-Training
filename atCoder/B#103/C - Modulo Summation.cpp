#include <bits/stdc++.h>

using namespace std;

long long n, x, tot;

int main()
{
    cin>>n;
    for (int i=1; i<=n; i++)
    {
        cin>>x;
        tot+=x-1;
    }
    cout<<tot;
    return 0;
}
