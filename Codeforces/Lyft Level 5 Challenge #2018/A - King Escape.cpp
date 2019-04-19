#include <bits/stdc++.h>
#define MOD 1000000007

using namespace std;

typedef long long ll;
typedef long double ld;

ll n, ax, ay, bx, by, cx, cy;

int main()
{
    #ifndef ONLINE_JUDGE
        freopen("mexitate.in", "r", stdin);
    #else
    #endif // ONLINE_JUDGE
    cin>>n;
    cin>>ax>>ay;
    cin>>bx>>by;
    cin>>cx>>cy;
    if (bx <= ax && ax<=cx || cx <= ax && ax<=bx)
        cout<<"NO";
    else if (by<=ay && ay<=cy || cy<=ay && ay<=by)
        cout<<"NO";
    else
        cout<<"YES";

    return 0;
}