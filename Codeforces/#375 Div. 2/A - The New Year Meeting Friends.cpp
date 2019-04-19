#include <bits/stdc++.h>

using namespace std;

int a, b, c, minim=1e9;

int main()
{
    cin>>a>>b>>c;
    for (int i=1; i<=100; i++)
    {
        if (abs(a-i)+abs(b-i)+abs(c-i)<minim)
            minim=abs(a-i)+abs(b-i)+abs(c-i);
    }
    cout<<minim;
	return 0;
}