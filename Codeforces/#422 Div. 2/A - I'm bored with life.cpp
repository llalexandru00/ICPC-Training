#include <bits/stdc++.h>

using namespace std;

long long a, b;

long long gcd(long long a, long long b)
{
    while (b)
    {
        long long r=a%b;
        a=b;
        b=r;
    }
    return a;
}

long long fact(long long x)
{
    long long fac=1;
    for (long long i=1; i<=x; i++)
        fac*=i;
    return fac;
}

int main()
{
    cin>>a>>b;
    if (a>b)
        swap(a, b);
    if (b<=12)
        cout<<gcd(fact(a), fact(b));
    else
    {
        cout<<fact(a);
    }
    return 0;
}