#include <iostream>
#include <string>

using namespace std;

string s;
int F[105], ok;

int main()
{
	cin >> s;
	for (int i = 0; i < s.size(); i++)
		F[s[i]]++;
	cin >> s;
	for (int i = 0; i < s.size(); i++)
		F[s[i]]++;
	cin >> s;
	for (int i = 0; i < s.size(); i++)
		F[s[i]]--;
	for (char i = 'A'; i <= 'Z'; i++)
		if (F[i] != 0)
			ok = 1;
	if (ok)
		cout << "NO";
	else
		cout << "YES";
	return 0;
}