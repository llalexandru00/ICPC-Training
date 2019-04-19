#include <bits/stdc++.h>

using namespace std;

int n;

int main()
{
    cin>>n;
    if (n%2==1)
    {
        cout<<-1;
        return 0;
    }
    if (n%2==0)
        for (int i=1; i<=n; i++)
        {
            if (i%2==1)
                cout<<i+1;
            else
                cout<<i-1;
            cout<<" ";
        }
    return 0;
}