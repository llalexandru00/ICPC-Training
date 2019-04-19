#include <bits/stdc++.h>

using namespace std;

int n, nr;
string a, b;

int main()
{
    cin>>n;
    cin>>a;
    cin>>b;
    for (int i=0; i<n; i++)
    {
        int x = a[i]-'0',  y = b[i]-'0';
        if (x>y)
            swap(x, y);
        nr += min(y-x, x+9-y+1);
    }
    cout<<nr;
    return 0;
}