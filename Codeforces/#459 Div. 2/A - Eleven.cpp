#include <bits/stdc++.h>

using namespace std;

int n, c, a, b, V[2005];

int main()
{
    cin>>n;
    V[1]=1;
    for (int a=1, b=1; c<=n;)
    {
        c=a+b;
        V[c]=1;
        a=b;
        b=c;
    }
    for (int i=1; i<=n; i++)
        if (V[i]==0)
            cout<<"o";
        else
            cout<<"O";
    return 0;
}