#include <bits/stdc++.h>

using namespace std;

int a, b, i, tot;

int main()
{
    cin>>a>>b;
    b = 240 - b;
    while (tot<=b)
    {
        i++;
        tot+=i*5;
    }
    cout<<min(a, i-1);
    return 0;
}