#include <iostream>

using namespace std;

int n,m, ans, x, y;

int main() {
    cin>>n>>m;
    for (int i=1; i<=n; i++)
    {
        for (int j=1; j<=2*m; j+=2)
        {
            cin>>x>>y;
            if (x || y)
                ans++;
        }
    }
    cout<<ans;
    return 0;
}