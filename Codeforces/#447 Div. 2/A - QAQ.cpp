#include <iostream>

using namespace std;

string s;
int q[1000], q2[1000];
long long sum;

int main()
{
    int i;
    cin>>s;
    int sz=s.size();
    for (i=0; i<sz; i++)
        q[i]=q[i-1]+(s[i]=='Q');
    for (i=sz-1; i>=0; i--)
        q2[i]=q2[i+1]+(s[i]=='Q');
    for (i=0; i<sz; i++)
        sum+=(s[i]=='A')?(q[i]*q2[i]):0;
    cout<<sum;
    return 0;
}