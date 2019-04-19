#include <bits/stdc++.h>

using namespace std;

int n;

int main()
{
    cin>>n;
    if (n%2==0)
        cout<<n*(n/2);
    else
        cout<<(n/2)*(n/2) +(n/2+1) * (n/2+1);
    cout<<'\n';
    for (int i=1; i<=n; i++)
    {
        for (int j=1; j<=n; j++)
            if (!(i%2)^(j%2))
                cout<<"C";
            else
                cout<<".";
        cout<<'\n';
    }
    return 0;
}