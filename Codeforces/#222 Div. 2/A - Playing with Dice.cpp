#include <bits/stdc++.h>

using namespace std;

int t, ok, x, F[5];

int main()
{
    cin>>t;
    ok=0;
    while (t--)
    {
        cin>>x;
        F[ok]+=x;
        ok++;
        if (ok==3)
            ok=0;
    }
    if (F[0]>F[1] && F[0]>F[2])
        cout<<"chest";

    if (F[0]<F[1] && F[2]<F[1])
        cout<<"biceps";

    if (F[0]<F[2] && F[1]<F[2])
        cout<<"back";
    return 0;
}