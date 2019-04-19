#include <iostream>
#include <cstring>

using namespace std;

char s[1000005];

void CH(int x)
{
    char A[6];
    int nr=0, i;
    while (x)
    {
        A[nr]=x%26+'A'-1;
        nr++;
        x=x/26;
    }

    for (i=0; i<nr-1; i++)
        if (A[i]<='@')
        {
            A[i+1]--;
            A[i]+=26;
        }
    x=nr-1;
    while (A[x]=='@')
        x--;
    nr=x+1;

    for (i=0; i<nr/2; i++)
        swap(A[i],A[nr-i-1]);
    A[nr]=0;
    cout<<A;
}

void showEx()
{
    int x=1, nr1=0, nr2=0;
    while (isdigit(s[x]))
    {
        nr1=nr1*10+s[x]-'0';
        x++;
    }
    x++;
    while (s[x])
    {
        nr2=nr2*10+s[x]-'0';
        x++;
    }
    CH(nr2);
    cout<<nr1<<'\n';
}

int NR(char A[])
{
    int c=1, nr=0, i;
    for (i=strlen(A)-1; i>=0; i--)
    {
        nr+=c*(A[i]-'A'+1);
        c*=26;
    }
    return nr;
}

void showCt()
{
    int x=0, nr=0;
    char A[6];
    while (!isdigit(s[x]))
    {
        A[x]=s[x];
        x++;
    }
    A[x]=0;
    while (s[x])
    {
        nr=nr*10+s[x]-'0';
        x++;
    }
    cout<<'R'<<nr;
    cout<<'C'<<NR(A)<<'\n';
}

int main()
{
    int n, i;
    cin>>n;
    for (i=1; i<=n; i++)
    {
        cin>>s;
        if (s[0]=='R' && isdigit(s[1]) && strchr(s, 'C'))
            showEx();
        else
            showCt();
    }
    return 0;
}