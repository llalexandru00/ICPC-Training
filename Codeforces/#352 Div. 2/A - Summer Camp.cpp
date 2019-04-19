#include <bits/stdc++.h>

using namespace std;

int n;
stringstream s;

int main()
{
    cin>>n;
    for (int i=1; i<=n; i++)
        s << i;
    cout<<s.str()[n-1];
    return 0;
}