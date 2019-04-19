#include <bits/stdc++.h>

using namespace std;

long long n, c, p[55], t[55], a, b;

int main() {
    cin >> n >> c;
    for (int i = 1; i <= n; i++)
        cin >> p[i];
    for (int i = 1; i <= n; i++)
        cin >> t[i];
    int time = 0;
    for (int i = 1; i <= n; i++)
    {
        time+=t[i];
        a+= max(0LL, p[i]-c*time);
    }
    time = 0;
    for (int i = n; i >= 1; i--)
    {
        time+=t[i];
        b+= max(0LL, p[i]-c*time);
    }
    if (a>b)
        cout<<"Limak";
    if (a<b)
        cout<<"Radewoosh";
    if (a==b)
        cout<<"Tie";
    return 0;
}