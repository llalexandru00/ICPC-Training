#include <iostream>
#include <string>

using namespace std;

string s;
int mic;

int main()
{
	cin >> s;
	for (int i = 0; i < s.size(); i++)
		if ('a' <= s[i] && s[i] <= 'z')
			mic++;
	if (mic >= s.size() / 2 + s.size()%2)
		for (int i = 0; i < s.size(); i++)
			if ('a' <= s[i] && s[i] <= 'z')
				cout << s[i];
			else
				cout << (char)(s[i]-'A'+'a');
	else
		for (int i = 0; i < s.size(); i++)
			if ('a' <= s[i] && s[i] <= 'z')
				cout << char(s[i] - 'a' + 'A');
			else
				cout << s[i];
	return 0;
}