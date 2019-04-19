#include <bits/stdc++.h>
#define INF 1e18

using namespace std;
typedef long long ll;


int main() {
    ios_base::sync_with_stdio(false);
    cin>>t;
    while (t--)
    {
        cin>>n;
        cin>>s;
        for (char c='a'; c<='z'; c++)
            for (int i=0; i<n; i++)
                    F[c][i]=F[c][i-1] + (s[i]==c);

        for (char c='a'; c<='z'; c++)
        {
            for (int i=n-1; i>=0; i--)
            {
                int x = F[c][i];
                if (i%2==0)
                {
                    auto it = P.lower_bound(x);
                    if (it != P.end())
                        

                }
            }
        }

    }
    return 0;
}