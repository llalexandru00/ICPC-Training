 #include <bits/stdc++.h>

using namespace std;

int x, y, z, mmm;

int gcd(int a, int b)
{
    while (b)
    {
        int r=a%b;
        a=b;
        b=r;
    }
    return a;
}

int main()
{
    cin>>x>>y>>z;
    mmm = x*y/gcd(x, y);
    cout<<z/mmm;
    return 0;
}