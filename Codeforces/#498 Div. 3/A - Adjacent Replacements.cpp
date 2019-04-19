#include <iostream>

using namespace std;

int n, x;

int main()
{
    cin>>n;
    for (int i=1; i<=n; i++)
    {
        cin>>x;
        cout<<x-!(x%2)<<" ";
    }
    return 0;
}
