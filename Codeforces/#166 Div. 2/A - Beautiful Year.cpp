#include <iostream>
#include <algorithm>

using namespace std;

int n;

bool OK(int n)
{
	int F[10];
	for (int i = 0; i <= 9; i++)
		F[i] = 0;
	while (n)
	{
		F[n % 10]++;
		n /= 10;
	}
	int ok = 1;
	for (int i = 0; i <= 9; i++)
	{
		if (F[i] >= 2)
			return 0;
	}
	return 1;
}

int main()
{
	cin >> n;
	n++;
	while (!OK(n))
		n++;
	cout << n;
	return 0;
}