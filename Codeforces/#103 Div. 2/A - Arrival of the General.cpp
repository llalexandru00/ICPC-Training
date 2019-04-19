#include <iostream>

using namespace std;

int n, maxim, minim=1e9, pmax, pmin;

int main()
{
	int x;
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		cin >> x;
		if (x > maxim)
		{
			maxim = x;
			pmax = i;
		}

		if (x <= minim)
		{
			pmin = i;
			minim = x;
		}
	}
	if (pmax < pmin)
		cout << pmax - 1 + n - pmin;
	else
		cout << pmax - 1 + n - pmin - 1;
	return 0;
}