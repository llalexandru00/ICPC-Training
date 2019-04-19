#include <bits/stdc++.h>
#define MOD 998244353
#define NMAX 2000000

using namespace std;

typedef long long ll;
typedef long double ld;
typedef unsigned long long ull;

ull n, x;
vector <ull> V, N;
map <ull, ull> M, P;
bool viz[1000];

ull gcd(ull a, ull b)
{
    while (b)
    {
        ull r = a%b;
        a=b;
        b=r;
    }
    return a;
}

bool sq(ull x)
{
    ull st=1, dr=1e10;
    while (st<=dr)
    {
        ull mijl = (st+dr)/2;
        if (mijl*mijl==x)
            return 1;
        if (mijl*mijl<x)
            st=mijl+1;
        else
            dr=mijl-1;
    }
    if (st*st==x)
        return 1;
    if (dr*dr==x)
        return 1;
    return 0;
}

bool ter(ull x)
{
    ull st=1, dr=2000000;
    while (st<=dr)
    {
        ull mijl = (st+dr)/2;
        if (mijl*mijl*mijl==x)
            return 1;
        if (mijl*mijl*mijl<x)
            st=mijl+1;
        else
            dr=mijl-1;
    }
    if (st*st*st==x)
        return 1;
    if (dr*dr*dr==x)
        return 1;
    return 0;
}

ull getsqrt(ull x)
{
    ull s = sqrt(x);
    ull st=1, dr=10000000000;
    while (st<=dr)
    {
        ull mijl = (st+dr)/2;
        if (mijl*mijl==x)
            return mijl;
        if (mijl*mijl<x)
            st=mijl+1;
        else
            dr=mijl-1;
    }
    if (st*st==x)
        return st;
    if (dr*dr==x)
        return dr;
}


bool quad(ull x)
{
    if (!sq(x))
        return 0;
    x = getsqrt(x);
    if (sq(x))
        return 1;
    return 0;
}

ull getsqrt3(ull x)
{
    ull st=1, dr=2000000;
    while (st<=dr)
    {
        ull mijl = (st+dr)/2;
        if (mijl*mijl*mijl==x)
            return mijl;
        if (mijl*mijl*mijl<x)
            st=mijl+1;
        else
            dr=mijl-1;
    }
    if (st*st*st==x)
        return st;
    if (dr*dr*dr==x)
        return dr;
}

ull getsqrt4(ull x)
{
    x = getsqrt(x);
    return getsqrt(x);
}

int main()
{
    cin>>n;
    for (ull i=1; i<=n; i++)
    {
        cin>>x;
        if (x==1)
            continue;
        if (sq(x) && !quad(x))
        {
            ull s = getsqrt(x);
            M[s]+=2;
        }
        else if (ter(x))
        {
            ull s = getsqrt3(x);
            M[s]+=3;
        }
        else if (quad(x))
        {
            ull s = getsqrt4(x);
            M[s]+=4;
        }
        else
        {
            V.push_back(x);
        }
    }

    //cazurile x = p1*p2
    for (int i=0; i<V.size(); i++)
    {
        ull ok = 0;
        if (viz[i]) continue;
        for (auto j : M)
        {
            if (V[i]%j.first==0)
            {
                M[j.first]++;
                M[V[i]/j.first]++;
                viz[i]=1;
                i=-1;
                break;
            }
        }
    }

    for (int i=0; i<V.size(); i++)
        if (!viz[i])
            N.push_back(V[i]);

    ull tot=1;
    V.clear();
    // mai raman x = p1*p2 iar p1 si p2 nu sunt in M
    for (ull i=0; i<N.size(); i++)
         P[N[i]]++;
    //conteaza si cate ai identice
    for (auto i : P)
    {
        ull p1=0, p2=0;
        for (auto j : P)
        {
            if (i.first==j.first) continue;
            ull g = gcd(i.first, j.first);
            if (g!=1ULL && g!=p1) // g==p1 sau g==p2
            {
                if (!p1)
                    p1=g;
                else
                    p2=g;
            }
        }
        if (!p1 && !p2)
        {
            tot *= (i.second+1);
            tot %= MOD;
            tot *= (i.second+1);
            tot %= MOD;
        }
        if (p1 && !p2)
        {
            M[p1] += i.second;
            tot *= i.second+1;
            tot %= MOD;
        }
        if (p1 && p2)
        {
            M[p1]+=i.second;
            M[p2]+=i.second;
        }
    }
    for (auto i : M)
    {
        tot *= (i.second+1);
        tot %= MOD;
    }
    cout<<tot;
    return 0;
}