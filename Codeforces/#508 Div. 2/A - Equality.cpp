#include <bits/stdc++.h>

using namespace std;

int n, k, F[100005], minim=1e9;
string s;

int main() {
    cin>>n>>k;
    cin>>s;
    for (auto i : s)
    {
        F[i]++;
    }
    for (int i='A'; i<'A'+k; i++)
        minim = min (minim, F[i]);
    cout<<minim*k;
    return 0;
}