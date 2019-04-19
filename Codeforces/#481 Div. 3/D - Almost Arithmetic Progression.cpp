#include <bits/stdc++.h>
#define INF 1000000000

using namespace std;


int n, V[100005], minim=INF, T[100005];

int solve(int r)
{
    int ans=0;
    for (int i=2; i<n; i++)
    {
        if (T[i]-T[i+1]==r)continue;
        if (T[i]-(T[i+1]-1)==r) T[i+1]--, ans++;
        else if (T[i]-(T[i+1]+1)==r) T[i+1]++, ans++;
        else
        {
            return INF;
        }
    }
    return ans;
}

int main() {
    cin>>n;
    for (int i=1; i<=n; i++)
        cin>>V[i];

    if (n==1)
    {
        cout<<0;
        return 0;
    }

    for (int i=-1; i<=1; i++)
    {
        for (int j=-1; j<=1; j++)
        {
            for (int k=1; k<=n; k++)
                T[k]=V[k];
            T[1]+=i;
            T[2]+=j;
            int x = solve(T[1]-T[2]);
            if (x+(i!=0)+(j!=0)<minim)
                minim=x+(i!=0)+(j!=0);
        }
    }
    if (minim==INF)
        cout<<-1;
    else
        cout<<minim;
    return 0;
}