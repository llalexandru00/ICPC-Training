#include <iostream>

using namespace std;

unsigned long long n, m, a, o1, o2;

int main()
{
    cin>>n>>m>>a;
    o1=(n%a==0)?(n/a):(n/a+1);
    o2=(m%a==0)?(m/a):(m/a+1);
    cout<<o1*o2;
    return 0;
}