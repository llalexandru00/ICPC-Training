#include <iostream>

using namespace std;

long long n, ok;
long long nr;

int main()
{
	cin >> n;
	while (n)
	{
		if (n % 10 == 4 || n % 10 == 7)
			nr++;
		n /= 10;
	}
	if (nr==4 || nr==7)
		cout << "YES";
	else
		cout << "NO";
	//system("pause");
	return 0;
}