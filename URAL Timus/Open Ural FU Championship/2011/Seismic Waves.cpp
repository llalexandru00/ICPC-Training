#include <bits/stdc++.h>
#define eps 1e-6
#define inf (ll)1e9

using namespace std;

typedef long long ll;
typedef long double ld;

map<string, vector<string> > m;
map<string, ll> d, D;
set<pair<ll, string > > Q;
vector<string> V;

const ll header = 6;

void DJ(string start, ll lng)
{
    for (const auto &i : V)
        d[i] = (ll)inf;
    for (const auto &i : V)
        D[i] = (ll)inf;
    d[start] = start.size()+header;
    Q.insert({start.size()+header, start});
    while (!Q.empty())
    {
        ll dist = Q.begin()->first;
        string nod = Q.begin()->second;
        Q.erase(Q.begin());
        for (auto i : m[nod])
        {
            if (d[i] > dist + (ll)i.size() + header)
            {
                if (Q.find({d[i], i})!=Q.end())
                    Q.erase(Q.find({d[i], i}));
                d[i] = dist + (ll)i.size() + header;
                Q.insert({d[i], i});
            }
        }
    }

    D[start] = 0;
    for (const auto &i : m[start])
        D[i] = 0;
    for (const auto &i : V)
        for (const auto &k : m[i])
            for (const auto &j : m[k])
                D[j] = min(D[j], d[i]);
}

vector<string> Ans;

int main()
{
    int t, n;
    string s, start, x;
    cin>>t;
    for (int j=1; j<=t; j++)
    {
        cin>>s;
        if (j==1)
            start=s;
        cin>>n;
        V.push_back(s);
        for (int i=1; i<=n; i++)
        {
            cin>>x;
            m[s].push_back(x);
        }
    }
    char line[205];
    ll lng;
    ll nr=0;
    cin.get();
    cin.getline(line, 200);
    lng = (ll)strlen(line);
    DJ(start, lng);
    for (const auto &name : V)
    {
        if (D[name] + lng <= 140)
        {
            nr++;
            Ans.push_back(name);
        }
    }
    cout<<nr<<endl;
    for (const auto &i : Ans)
        cout<<i<<endl;
    return 0;
}