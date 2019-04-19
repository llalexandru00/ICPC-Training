#include <bits/stdc++.h>

using namespace std;

int n, V[55], F[1005];
vector<int> A;

int main() {
    cin>>n;
    for (int i=1; i<=n; i++)
        cin>>V[i];
    for (int i=n; i>=1; i--)
    {
        if (!F[V[i]])
            A.push_back(V[i]), F[V[i]]=1;
    }
    cout<<A.size()<<'\n';
    for (int i=A.size()-1; i>=0; i--)
        cout<<A[i]<< " ";
    return 0;
}