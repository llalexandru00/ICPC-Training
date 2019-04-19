#include <iostream>
#include <cstring>

using namespace std;

char s1[105], s2[105];
int i;

int main()
{
    cin>>s1;
    cin>>s2;
    for (i=0; i<strlen(s1); i++)
        if (s1[i]<='Z')
            s1[i]+='z'-'Z';
    for (i=0; i<strlen(s2); i++)
        if (s2[i]<='Z')
            s2[i]+='z'-'Z';
    cout<<strcmp(s1, s2);
    return 0;
}