#include <iostream>

using namespace std;

int a, b;

int main()
{
	cin >> a >> b;
	if (a > 8 || b > 8) cout << ":(";
	else cout << "Yay!";
	cout << '\n';
	return 0;
}