#include <bits/stdc++.h>

using namespace std;

int n;


int main()
{
    cin>>n;
    for (int i=1; i<=n; i+=2)
    {
        for (int j=1; j<=(n-i)/2; j++)
            cout<<"*";

        for (int j=1; j<=i; j++)
            cout<<"D";

        for (int j=1; j<=(n-i)/2; j++)
            cout<<"*";
        cout<<'\n';
    }

    for (int i=n-2; i>=1; i-=2)
    {
        for (int j=1; j<=(n-i)/2; j++)
            cout<<"*";

        for (int j=1; j<=i; j++)
            cout<<"D";

        for (int j=1; j<=(n-i)/2; j++)
            cout<<"*";
        cout<<'\n';
    }
    return 0;
}