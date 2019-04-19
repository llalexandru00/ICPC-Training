#include <iostream>

using namespace std;

int n, i, a, b, c, nr;

int main()
{
    cin>>n;
    for (i=1; i<=n; i++)
    {
        cin>>a>>b>>c;
        if (a+b+c>1)
            nr++;
    }
    cout<<nr;
    return 0;
}