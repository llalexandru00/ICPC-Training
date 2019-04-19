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

string s0, s1;
int q, m, n;
char t, c;
map< pair<int, int>, int> M;


int main()
{
	cin >> s0;
	cin >> s1;
	cin >> q;
	while (q--)
	{
		cin >> m >> t >> n >> c;
		if (M[{t, n}] == 1 || (c == 'r' && !M[{t, n}]))
		{
			cout << (t == 'h' ? s0 : s1) << " " << n << " " << m << '\n';
			M[{t, n}]=2;
		}
		else if (c == 'y')
			M[{t, n}]++;
	}
	return 0;
}