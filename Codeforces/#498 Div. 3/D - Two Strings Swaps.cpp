#include <bits/stdc++.h>

using namespace std;

int n, tot;
string a, b;

int main()
{
    cin>>n;
    cin>>a>>b;
    for (int i=0; i<n/2; i++)
    {
        char c1 = a[i];
        char c2 = b[i];
        char c3 = a[n-i-1];
        char c4 = b[n-i-1];
        if (c1!=c2 && c1!=c3 && c1!=c4 && c2!=c3 && c2!=c4 && c3!=c4)
        {
            tot+=2;
            continue;
        }

        if (c1==c2 && c2==c3 && c3==c4) continue;
        if (c1==c2 && c3==c4) continue;
        if (c1==c4 && c3==c2) continue;
        if (c1==c3 && c2==c4) continue;

        if (c1==c2 && c2==c3 && c3!=c4)
        {
            tot++;
            continue;
        }
        if (c1==c2 && c2==c4 && c4!=c3)
        {
            tot++;
            continue;
        }
        if (c1==c3 && c3==c4 && c1!=c2)
        {
            tot++;
            continue;
        }
        if (c4==c2 && c2==c3 && c2!=c1)
        {
            tot++;
            continue;
        }

        if (c1==c3)
            tot+=2;
        else
            tot++;

    }
    if (n%2==1)
        tot+=(a[(n-1)/2] != b[(n-1)/2]);
    cout<<tot;
    return 0;
}
