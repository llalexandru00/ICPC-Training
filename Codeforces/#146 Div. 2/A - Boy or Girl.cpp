#include <iostream>
#include <string>

using namespace std;

string s;
int F[300], nrc;

int main()
{
	cin >> s;
	for (int i = 0; i < s.size(); i++)
		F[s[i]]++;
	for (char i = 'a'; i <= 'z'; i++)
	{
		if (F[i] >= 1)
		{
			nrc++;
		}
	}
	if (nrc % 2 == 0)
		cout << "CHAT WITH HER!";
	else
		cout << "IGNORE HIM!";
	return 0;
}