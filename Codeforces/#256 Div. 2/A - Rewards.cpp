#include <bits/stdc++.h>

using namespace std;

int a, b, c, cups, medals, n;
int main()
{
    cin>>a>>b>>c;
    cups = (a+b+c)/5 + ((a+b+c)%5>0?1:0);
    cin>>a>>b>>c;
    medals = (a+b+c)/10 + ((a+b+c)%10>0?1:0);
    cin>>n;
    if (cups+medals>n)
        cout<<"NO";
    else
        cout<<"YES";
    return 0;
}