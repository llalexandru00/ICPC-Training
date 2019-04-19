#include <bits/stdc++.h>

using namespace std;

int n, nr;
string s;

int main()
{
    cin>>n;
    while (n--)
    {
        cin>>s;
        if (s=="Tetrahedron")
            nr+=4;
        if (s=="Cube")
            nr+=6;
        if (s=="Octahedron")
            nr+=8;
        if (s=="Dodecahedron")
            nr+=12;
        if (s=="Icosahedron")
            nr+=20;
    }
    cout<<nr;
    return 0;
}