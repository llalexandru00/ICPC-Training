#include <iostream>

using namespace std;

int n, x, V[105];

int main()
{
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		cin >> x;
		V[x] = i;
	}
	for (int i = 1; i <= n; i++)
	{
		cout << V[i]<<" ";
	}
	return 0;
}