#include <bits/stdc++.h>

using namespace std;

long long n, k;

int main() {
    cin>>n>>k;
    cout<<n*8/k + n*2/k + n*5/k + (n*5%k?1:0) + (n*2%k?1:0) + (n*8%k?1:0);
    return 0;
}