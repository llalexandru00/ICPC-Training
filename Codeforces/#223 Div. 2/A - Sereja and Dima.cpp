#include <bits/stdc++.h>

using namespace std;

int n, V[1005], ok, F[3];

int main()
{
    cin>>n;
    for (int i=1; i<=n; i++)
    {
        cin>>V[i];
    }
    ok=0;
    for (int i=1, j=n; i<=j;)
    {
        if (V[i]<V[j])
        {
            F[ok]+=V[j];
            j--;
        }
        else
        {
            F[ok]+=V[i];
            i++;
        }
        ok ^= 1;
    }
    cout<<F[0]<<" "<<F[1];
    return 0;
}