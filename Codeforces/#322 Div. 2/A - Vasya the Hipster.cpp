#include <bits/stdc++.h>

using namespace std;

int r, b;

int main()
{
    cin>>r>>b;
    cout<<min(r, b)<<" "<<(max(r, b)-min(r, b))/2;
    return 0;
}