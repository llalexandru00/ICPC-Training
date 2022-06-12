#include <iostream>

using namespace std;

int n, x, nr;

int main()
{
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		cin >> x;
		while (x % 2 == 0)
		{
			nr++;
			x /= 2;
		}
	}
	cout << nr;
	return 0;
}