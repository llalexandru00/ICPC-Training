#include <bits/stdc++.h>
#pragma warning(disable: 4996)
#define INF (1e9)
#define mod (ll(1e9)+7)

using namespace std;

int x;
int main() {
	ios_base::sync_with_stdio(false);
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
#endif
    cin>>x;
    if (x==1)
    {
        cout<<-1;
        return 0;
    }
    cout<<x<<" "<<x;
	return 0;
}