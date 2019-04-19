#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

struct punct{int d[6];};
struct node{node *st, *dr; int valmax[33], valmin[33];};

node *arb;
int n, k;
punct V[200005];

int sum(int c, punct *i)
{
    int tot=0;
    for (int j=1; j<=k; j++, c/=2)
    {
        if (c%2==1)
            tot+=i->d[j];
        else
            tot-=i->d[j];
    }
    return tot;
}

void build(node* act, int st, int dr)
{
    if (st==dr)
    {
        int lim = (1<<k);
        for (int c=0; c<lim; c++)
            act->valmin[c] = act->valmax[c] = sum(c, &V[st]);
        return;
    }
    act->st = new node();
    build(act->st, st, (st+dr)/2);

    act->dr = new node();
    build(act->dr, (st+dr)/2+1, dr);

    int lim = (1<<k);
    for (int c=0; c<lim; c++)
    {
        act->valmax[c] = max(act->st->valmax[c], act->dr->valmax[c]);
        act->valmin[c] = min(act->st->valmin[c], act->dr->valmin[c]);
    }
}

void update(node* act, int st, int dr, int poz, punct* val)
{
    if (st==dr)
    {
        int lim = (1<<k);
        for (int c=0; c<lim; c++)
            act->valmin[c] = act->valmax[c] = sum(c, val);
        return;
    }

    if (poz<=(st+dr)/2)
        update(act->st, st, (st+dr)/2, poz, val);
    else
        update(act->dr, (st+dr)/2+1, dr, poz, val);
    int lim = (1<<k);
    for (int c=0; c<lim; c++)
    {
        act->valmax[c] = max(act->st->valmax[c], act->dr->valmax[c]);
        act->valmin[c] = min(act->st->valmin[c], act->dr->valmin[c]);
    }
}

pair<int, int> query(int c, node* act, int st, int dr, int l, int r)
{
    int mijl=(st+dr)/2;
    if (st==l && dr==r)
        return {act->valmax[c], act->valmin[c]};
    if (l<=mijl && mijl<r)
    {
        pair<int, int> a = query(c, act->st, st, mijl, l, mijl);
        pair<int, int> b = query(c, act->dr, mijl+1, dr, mijl+1, r);
        return {max(a.first, b.first), min(a.second, b.second)};
    }
    if (r<=mijl)
        return query(c, act->st, st, mijl, l, r);
    return query(c, act->dr, mijl+1, dr, l, r);
}

int main()
{
    ios_base::sync_with_stdio(false);
    scanf("%d %d", &n, &k);
    for (int i=1; i<=n; i++)
    {
        for (int j=1; j<=k; j++)
        {
            scanf("%d", &V[i].d[j]);
        }
    }
    arb = new node();
    build(arb, 1, n);

    int q;
    scanf("%d", &q);
    while(q--)
    {
        int t;
        scanf("%d", &t);
        if (t==1)
        {
            int poz;
            scanf("%d", &poz);
            punct a{};
            for (int i=1; i<=k; i++)
                scanf("%d", &a.d[i]);
            V[poz]=a;
            update(arb, 1, n, poz, &a);
        }
        else
        {
            int l, r;
            scanf("%d %d", &l, &r);
            int maxim=-1;
            for (int c=0; c<(1<<k); c++)
            {
                pair<int, int> x = query(c, arb, 1, n, l, r);
                if (x.first-x.second>maxim)
                    maxim=x.first-x.second;
            }
            printf("%d\n", maxim);
        }
    }
    return 0;
}