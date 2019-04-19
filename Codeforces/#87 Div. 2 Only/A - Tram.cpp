#include <iostream>

using namespace std;

int n, i, a, b, c, cap, maxim;

int main()
{
    cin>>n;
    for (i=1; i<=n; i++)
    {
        cin>>a>>b;
        cap+=b-a;
        if (cap>maxim)
            maxim=cap;
    }
    cout<<maxim;
}