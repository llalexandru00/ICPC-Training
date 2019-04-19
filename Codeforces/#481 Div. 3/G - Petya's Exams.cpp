#include <bits/stdc++.h>

using namespace std;

int n, m;
tuple<int, int, int> Ex[105];
struct dat{int s, d, c;} V[105];
vector<int> Ans;

int main() {

    cin>>n>>m;
    for (int i=1; i<=m; i++)
    {
        cin>>V[i].s>>V[i].d>>V[i].c;
        if (Ex[V[i].d]!=make_tuple(0, 0, 0))
        {
            cout<<-1;
            return 0;
        }
        Ex[V[i].d]={V[i].s, V[i].c, i};
    }

    for (int i=1; i<=n; i++)
    {
        if (Ex[i] != make_tuple(0, 0, 0))
        {
            if (get<1>(Ex[i])>0)
            {
                cout<<-1;
                return 0;
            }
            Ans.push_back(m+1);
            continue;
        }
        int ok=0;
        for (int j=i+1; j<=n; j++)
        {
            if (Ex[j] != make_tuple(0, 0, 0))
            {
                if (get<0>(Ex[j])<=i && get<1>(Ex[j])>0)
                {
                    Ans.push_back(get<2>(Ex[j]));
                    Ex[j] = make_tuple (get<0>(Ex[j]), get<1>(Ex[j])-1, get<2>(Ex[j]));
                    ok=1;
                    break;
                }
            }
        }
        if (!ok)
            Ans.push_back(0);
    }

    for (auto i : Ans)
        cout<<i<<" ";

    return 0;
}