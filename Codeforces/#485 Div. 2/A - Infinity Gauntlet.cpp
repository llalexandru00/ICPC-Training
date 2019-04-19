#include <iostream>
#include <vector>
#include <set>
#include <stack>
#include <cstring>
#include <algorithm>
#include <string>
#include <functional> 
#include <map>

using namespace std;
typedef long long ll;

map <string, string> M;

int n;
string s;

int main()
{
	cin >> n;
	M["purple"] = "Power";
	M["green"] = "Time";
	M["blue"] = "Space";
	M["orange"] = "Soul";
	M["red"] = "Reality";
	M["yellow"] = "Mind";
	while (n--)
	{
		cin >> s;
		M.erase(M.find(s));
	}

	cout << M.size() << '\n';
	for (auto i : M)
	{
		cout << i.second << '\n';
	}
}