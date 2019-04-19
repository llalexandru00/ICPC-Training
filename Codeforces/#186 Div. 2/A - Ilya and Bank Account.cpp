#include <bits/stdc++.h>

using namespace std;

int n;

int main()
{
    cin>>n;
    cout<<max(n,max( n/100*10+n%10, n/10));
	return 0;
}