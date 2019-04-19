#include <iostream>
#include <string>

using namespace std;

string s1, s2;

int main()
{
	cin >> s1;
	cin >> s2;
	int sz = s1.size();
	for (int i = 0; i < sz; i++)
		if (s1[i] == s2[i])
			cout << 0;
		else
			cout << 1;
	return 0;
}