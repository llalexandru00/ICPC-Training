#include <bits/stdc++.h>

using namespace std;

double tot, x;

int main()
{
    int n;
    cin>>n;
    for (int i=1; i<=n; i++)
    {
        cin>>x;
        tot+=x;
    }
    cout<<setprecision(5)<<tot/n;
	return 0;
}