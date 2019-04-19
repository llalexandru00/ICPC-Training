#include <bits/stdc++.h>
#define eps 1e-9

using namespace std;

typedef long long ll;
typedef long double ld;

ll n;

struct node{node *st, *dr; ll val=-1;} *tata = new node();


void add(node* act, ll val, ll fin, ll lvl)
{
    if (lvl==0)
    {
        act->val=fin;
        return;
    }
    if (val&(1<<(n-lvl)))
    {
        if (act->dr==nullptr)
            act->dr = new node();
        add(act->dr, val, fin, lvl-1);
    }
    else
    {
        if (act->st==nullptr)
            act->st = new node();
        add(act->st, val, fin, lvl-1);
    }
}

ll DFS(node* act)
{
    ll x=0, y=0;
    if (act->st!=nullptr)
        x = DFS(act->st);
    if (act->dr!=nullptr)
        y = DFS(act->dr);
    if (x==0 || y==0)
        return x+y+1;
    if (act->st->val==act->dr->val && act->st->val!=-1)
    {
        act->val=act->st->val;
        return 1;
    }
    else
        return 1+x+y;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin>>n;
    for (ll i=0; i<(1<<n); i++)
    {
        ll x;
        cin>>x;
        add(tata, i, x, n);
    }
    cout<<DFS(tata);
    return 0;
}