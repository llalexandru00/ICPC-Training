#include <iostream>
#include <utility>
#include <algorithm>
#include <string>
#include <map>
#include <set>
#include <queue>
#include <cstdlib>
#include <stack>
#include <iomanip>
#include <cstring>
#include <vector>
#include <cmath>
#include <utility>
#include <fstream>
#include <cassert>
#include <cmath>
#define NMAX 1000005
#define MOD 2147483647
#define INF 1e9
#pragma warning(disable:4996)

using namespace std;
typedef long long ll;
typedef long double ld;

int a = 1234567, b = 123456, c = 1234, n;


int main()
{
	cin >> n;
	for (int i=0; a*i<=n; i++)
		for (int j = 0; a*i + j * b <= n; j++)
			if ((n - a * i - j * b) % c == 0)
			{
				cout << "YES";
				return 0;
			}
	cout << "NO";
	return 0;
}