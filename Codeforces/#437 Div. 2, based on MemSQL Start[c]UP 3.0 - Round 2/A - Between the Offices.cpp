#include <iostream>

using namespace std;

int n, f;
string s;
char c;

int main() {
    cin>>n;
    cin>>s;
    c = s[0];
    for (int i=1; i<s.size(); i++)
    {
        if (s[i]!=c)
        {
            f++;
            c=s[i];
        }
    }
    cout << ((s[0] == 'S' && f % 2 == 1) ? "YES" : "NO");
    return 0;
}