#include <iostream>

using namespace std;

int a, b;

int main()
{
	cin >> b >> a;
	if (a == 100)
	{
		a++;
	}
	cout << a;
	for (int i = 1; i <= b; i++)
		cout << "00";
	return 0;
}