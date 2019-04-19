#include <bits/stdc++.h>
#define MOD 1000000007

using namespace std;

long long n, k;

int main()
{
    cin>>n>>k;
    if (n/k%2==0)
        cout<<"NO";
    else
        cout<<"YES";
    return 0;
}