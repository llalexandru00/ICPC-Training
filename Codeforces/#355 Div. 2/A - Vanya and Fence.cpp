#include <iostream>
#include <string>

using namespace std;

int n, h, x, nr;

int main()
{
	cin >> n >> h;
	for (int i = 1; i <= n; i++)
	{
		cin >> x;
		if (x > h)
			nr++;
	}
	cout << n + nr;
	return 0;
}