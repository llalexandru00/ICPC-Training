#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

ll n, m, V[100005], Nxt[100005];
vector<ll> Sol;
bool Viz[100005];
map<ll, ll> M;

struct node{node *st, *dr; vector<ll> Val;} *tata = new node();

void build(node* act, ll l, ll r)
{
    if (l==r)
    {
        act->Val.push_back(Nxt[l]);
        return;
    }
    act->st=new node();
    build(act->st, l, (l+r)/2);
    act->dr=new node();
    build(act->dr, (l+r)/2+1, r);
    ll i=0, j=0;
    for (; i<act->st->Val.size() && j<act->dr->Val.size();)
    {
        if (act->st->Val[i]<act->dr->Val[j])
        {
            act->Val.push_back(act->st->Val[i]);
            i++;
        } else
        {
            act->Val.push_back(act->dr->Val[j]);
            j++;
        }
    }
    while (i < act->st->Val.size())
    {
        act->Val.push_back(act->st->Val[i]);
        i++;
    }
    while (j < act->dr->Val.size())
    {
        act->Val.push_back(act->dr->Val[j]);
        j++;
    }
}

ll query(node* act, ll l, ll r, ll ql, ll qr, ll val)
{
    if (ql<=l && r<=qr)
    {
        ll st=0, dr=act->Val.size()-1;
        while (st<=dr)
        {
            ll mijl=(st+dr)/2;
            if (act->Val[mijl]<val)
                st=mijl+1;
            else
                dr=mijl-1;
        }
        if (st<act->Val.size() && act->Val[st]<val)
            return act->Val.size()-(st+1);
        else if (dr>=0 && act->Val[dr]<val)
            return act->Val.size()-(dr+1);
        else
            return act->Val.size();
    }
    ll mijl=(l+r)/2, a=0, b=0;
    if (ql<=mijl)
        a = query(act->st, l, mijl, ql, qr, val);
    if (mijl+1<=qr)
        b = query(act->dr, mijl+1, r, ql, qr, val);
    return a+b;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin>>n>>m;
    for (ll i=1; i<=m; i++)
        Nxt[i]=1000000000;
    ll nr=n;
    for (ll i=1; i<=m; i++)
    {
        cin>>V[i];
        if (nr>0 && !Viz[V[i]])
        {
            Sol.push_back(V[i]);
            Viz[V[i]]=1;
            nr--;
        }
    }
    for (ll i=1; i<=n; i++)
    {
        if (!Viz[i])
            Sol.push_back(i);
    }
    for (auto i : Sol)
        cout<<i<<" ";
    cout<<endl;
    for (ll i=m; i>=1; i--)
    {
        if (M.find(V[i])!=M.end())
            Nxt[i] = M[V[i]];
        M[V[i]] = i;
    }

    build(tata, 1, m);
    for (ll i=1; i<=m; i++)
    {
        if (Nxt[i]==1000000000)
            cout<<n-1<<endl;
        else
            cout<<query(tata, 1, m, i+1, Nxt[i]-1, Nxt[i])<<endl;
    }
    return 0;
}