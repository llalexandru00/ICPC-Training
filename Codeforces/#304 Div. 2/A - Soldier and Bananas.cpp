#include <iostream>

using namespace std;

int k, n, w;

int main()
{
	cin >> k >> n >> w;
	cout << max(0, k*w*(w + 1) / 2 - n);
	return 0;
}