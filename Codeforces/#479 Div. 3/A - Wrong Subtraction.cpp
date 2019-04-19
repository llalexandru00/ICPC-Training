#include <iostream>

using namespace std;

int main() {

    int n, x;
    cin>>n>>x;
    for (int i=1; i<=x; i++)
    {
        if (n%10==0)
            n/=10;
        else
            n--;
    }
    cout<<n;
    return 0;
}