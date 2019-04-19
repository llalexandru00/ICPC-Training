#include <iostream>

using namespace std;

int n, i, p, q, nr;

int main()
{
	cin >> n;
	for (i = 1; i <= n; i++)
	{
		cin >> p >> q;
		if (q - p >= 2)
			nr++;
	}
	cout << nr;
	return 0;
}