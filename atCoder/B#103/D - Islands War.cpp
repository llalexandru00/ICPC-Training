#include <bits/stdc++.h>

using namespace std;

struct island{int x, y;} V[100005];

int tot, n, m;

bool comp(island a, island b)
{
    if (a.y==b.y)
        return a.x<b.x;
    return a.y<b.y;
}

int main()
{
    cin>>n>>m;
    for (int i=1; i<=m; i++)
        cin>>V[i].x>>V[i].y;
    sort(V+1, V+m+1, comp);
    int lastx=0;
    for (int i=1; i<=m; i++)
    {
        if (lastx>V[i].x)
            continue;
        tot++;
        lastx = V[i].y;
    }
    cout<<tot;
    return 0;
}
