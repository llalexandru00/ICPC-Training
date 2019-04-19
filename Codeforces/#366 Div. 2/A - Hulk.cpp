#include <bits/stdc++.h>
#define eps 1e-9

using namespace std;

string s[] = {"I hate that ", "I love that "};

int main()
{
    int i, n;
    cin>>n;
    i=0;
    while (n>1)
    {
        cout<<s[i];
        i^=1;
        n--;
    }
    if (i==0)
        cout<<"I hate it";
    else
        cout<<"I love it";
	return 0;
}