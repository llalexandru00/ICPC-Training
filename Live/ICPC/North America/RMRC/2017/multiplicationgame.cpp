#include <bits/stdc++.h>
#define eps 1e-9

using namespace std;

typedef long long ll;

ll scor, x, y, t;
unordered_map<ll, ll> m;
string om;
vector<ll> Primes;
bool P[100005];

void sieve()
{
    P[0]=P[1]=1;
    for (ll i=2; i<=1e5; i++)
    {
        if (P[i]==0)
        {
            for (ll j=i*i; j<=1e5; j+=i)
                P[j]=1;
            Primes.push_back(i);
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    scanf("%I64d", &t);
    sieve();
    while (t--)
    {
        char v[20];
        scanf("%I64d%s", &scor, v);
        om = string(v);
        m.clear();
        for (int d=0; Primes[d]*Primes[d]<=scor; d++)
        {
            while (scor % Primes[d] == 0)
                m[Primes[d]]++, scor/=Primes[d];
            if (m.size()>2)
                break;
        }
        if (scor>1)
            m[scor]=1;
        if (m.size()>2)
            printf("tie");
        else if (m.size()==1)
        {
            x = m.begin()->second;
            if (x%2==0)
                printf("%s", (om=="Bob"?"Alice":"Bob"));
            else
                printf("%s", (om!="Bob"?"Alice":"Bob"));
        }
        else
        {
            x = m.begin() -> second;
            y = (++m.begin())->second;
            if (abs(x-y)>1)
                printf("tie");
            else if ((x+y)%2==0)
                printf("%s", (om=="Bob"?"Alice":"Bob"));
            else
                printf("%s", (om!="Bob"?"Alice":"Bob"));
        }
        printf("\n");
    }
    return 0;
}