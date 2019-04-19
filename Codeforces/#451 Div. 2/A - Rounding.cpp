#include <iostream>

using namespace std;

int a;

int main()
{
	cin >> a;
	if (a % 10 <= 5)
		cout << a / 10 * 10;
	else
		cout <<(a / 10 + 1) * 10;
	return 0;
}