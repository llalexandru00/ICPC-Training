#include <bits/stdc++.h>
#define MOD 1000000007

using namespace std;

long long n, r, avg, sum, nr;
multiset<pair<long long, long long>, less<> > S;


int main()
{
    cin>>n>>r>>avg;
    avg*=n;
    for (long long i=1; i<=n; i++)
    {
        long long x, y;
        cin>>x>>y;
        if (x!=r)
            S.insert({y, x});
        sum+=x;
    }
    while (!S.empty() && sum<avg)
    {
        long long y = S.begin()->first;
        long long x = S.begin()->second;
        S.erase(S.begin());
        if (sum+r-x<=avg)
        {
            nr+=y*(r-x);
            sum+=r-x;
        } else
        {
            long long cate=avg-sum;
            nr+=y*cate;
            sum+=cate;
        }
    }
    cout<<nr;
    return 0;
}