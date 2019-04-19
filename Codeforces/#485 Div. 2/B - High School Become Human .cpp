#include <iostream>
#include <vector>
#include <set>
#include <stack>
#include <cstring>
#include <algorithm>
#include <string>
#include <functional> 
#include <map>
#define eps 1e-6

using namespace std;
typedef long long ll;

long double n, m;


int main()
{
	cin >> n >> m;
	if (m*log(n) < n*log(m) - eps)
	{
		cout << "<";
	}
	if (abs(m*log(n) - n*log(m)) <= eps)
	{
		cout << "=";
	}
	if (m*log(n) > n*log(m) + eps)
	{
		cout << ">";
	}
}