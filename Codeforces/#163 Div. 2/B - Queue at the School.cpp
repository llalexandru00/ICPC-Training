#include <iostream>
#include <string>

using namespace std;

int n, t;
string s;

int main()
{
	cin >> n >> t;
	cin >> s;
	while (t--)
	{
		for (int i = 0; i < s.size()-1; i++)
		{
			if (s[i] == 'B' && s[i + 1] == 'G')
			{
				swap(s[i], s[i + 1]);
				i++;
			}
		}
	}
	cout << s;
	//system("pause");
	return 0;
}