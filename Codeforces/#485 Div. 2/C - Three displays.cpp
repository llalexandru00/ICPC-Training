#include <iostream>
#include <vector>
#include <set>
#include <stack>
#include <cstring>
#include <algorithm>
#include <string>
#include <functional> 
#include <map>
#define eps 1e-6

using namespace std;
typedef long long ll;

ll n, m;
ll V[3005], C[3005];

int main()
{
	cin >> n;
	ll minimtot = 1e18;
	for (int i = 1; i <= n; i++)
		cin >> V[i];
	for (int i = 1; i <= n; i++)
		cin >> C[i];
	for (int i = 2; i < n; i++)
	{
		ll minim = 1e18;
		for (int j = i - 1; j >= 1; j--)
		{
			if (V[j] < V[i] && C[j] < minim)
				minim = C[j];
		}
		if (minim == 1e18)
			continue;
		ll minim2 = 1e18;
		for (int j = i+1; j <= n; j++)
		{
			if (V[i] < V[j] && C[j] < minim2)
				minim2 = C[j];
		}
		if (minim2 == 1e18)
			continue;
		if (minimtot > minim + minim2 + C[i])
			minimtot = minim + minim2 + C[i];
	}
	if (minimtot == 1e18)
		cout << -1;
	else
		cout << minimtot;;
}