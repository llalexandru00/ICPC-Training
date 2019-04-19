#include <iostream>

using namespace std;

string line[3];
int x, o;

bool win(char c)
{
    if (line[0][0]==line[1][1] && line[1][1]==line[2][2] && line[2][2]==c)
        return 1;
    if (line[0][2]==line[1][1] && line[1][1]==line[2][0] && line[2][0]==c)
        return 1;

    for (int i=0; i<3; i++)
    {
        int ok=1;
        for (int j=0; j<3; j++)
            if (line[i][j]!=c)
                ok=0;
        if (ok)
            return 1;
    }

    for (int j=0; j<3; j++)
    {
        int ok=1;
        for (int i=0; i<3; i++)
            if (line[i][j]!=c)
                ok=0;
        if (ok)
            return 1;
    }
    return 0;
}

int main()
{
    for (int i=0; i<3; i++)
        cin>>line[i];

    for (int i=0; i<3; i++)
        for (int j=0; j<3; j++)
            if (line[i][j]=='X')
                x++;
            else if (line[i][j]=='0')
                o++;

    if ((win('0') && x!=o)||(win('X') && x!=o+1)||(x!=o+1 && x!=o))
    {
        cout<<"illegal";
        return 0;
    }

    if (win('X') && x==o+1)
    {
        cout<<"the first player won";
        return 0;
    }

    if (win('0') && x==o) //Att
    {
        cout<<"the second player won";
        return 0;
    }

    if (x==5 && o==4 && !win('X') && !win('0'))
    {
        cout<<"draw";
        return 0;
    }

    if (x==o)
        cout<<"first";
    else
        cout<<"second";
    return 0;
}
