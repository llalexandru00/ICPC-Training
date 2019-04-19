#include <bits/stdc++.h>
#define eps 1e-6
#define inf (ll)1e9

using namespace std;

typedef long long ll;
typedef long double ld;

struct node{node* st, *dr; char sign;};

int t;

node* generate(const string &in, int l, int r)
{
    if (l==r)
    {
        node* act = new node();
        act->sign=in[l];
        return act;
    }
    if (l>r)
        return nullptr;
    int st=0, place=0;
    for (int i=l; i<=r; i++)
    {
        if (in[i]=='(')
            st++;
        else if (in[i]==')')
            st--;
        else if (st==0 && (in[i] == '+' || in[i] == '-' || in[i] == '*' || in[i] == '/' || in[i] == '^'))
        {
            place=i;
            break;
        }
    }
    node* act = new node();
    if (l==place-1)
        act->st = generate(in, l, place-1);
    else
        act->st = generate(in, l+1, place-2);
    if (r==place+1)
        act->dr = generate(in, place+1, r);
    else
        act->dr = generate(in, place+2, r-1);
    act->sign = in[place];
    return act;
}

string liniarize(node* in)
{
    string left, right;
    if (in->st!=nullptr)
        left = liniarize(in->st);
    if (in->dr!=nullptr)
        right = liniarize(in->dr);
    return left+right+in->sign;
}

string rpn(string in)
{
    node* root = generate(in, 1, in.size()-2);
    return liniarize(root);
}

int main()
{
    cin>>t;
    while (t--)
    {
        string s;
        cin>>s;
        cout<<rpn(s);
    }
    return 0;
}