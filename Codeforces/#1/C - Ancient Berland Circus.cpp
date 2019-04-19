#include <iostream>
#include <cstdio>
#include <cmath>
#define MAXP 100
#define EP 0.000001
#define PI 3.14159265359
#define INF 1000000000

using namespace std;

double minim=INF;

struct punct
{
    double x, y;
} A, B, C;

inline double getDist(punct a, punct b)
{
    return hypot(a.x-b.x, a.y-b.y);
}

inline double getArea(punct a, punct b, punct c)
{
    return abs(((B.x-A.x)*(C.y-A.y)-(B.y-A.y)*(C.x-A.x)))/2.0;
}

double getRadius(punct a, punct b, punct c)
{
    double ab=getDist(a,b), bc=getDist(b,c), ac=getDist(a, c);
    return ab*bc*ac/(4*getArea(a, b, c));
}

double getUnghi(punct a, punct b, punct c)
{
    double ab=getDist(a,b), bc=getDist(b,c), ac=getDist(a, c);
    return acos((ab*ab-bc*bc-ac*ac)/(-2*bc*ac));
}

bool ok(double a, double b)
{
    if (abs(a-b)<EP)
        return 1;
    return 0;
}

void Show(int n, double R)
{
    double ans = n*R*R*sin(2*PI/n)/2;
    //cout<<ans;
    if (ans<minim)
        minim=ans;
}

int main()
{
    double u1, u2, u3, u, R, v1, v2, v3;
    int i, j, k;
    cin>>A.x>>A.y;
    cin>>B.x>>B.y;
    cin>>C.x>>C.y;
    u1=getUnghi(B, C, A);
    u2=getUnghi(A, C, B);
    u3=getUnghi(A, B, C);

    R=getRadius(A, B, C);

    int gata=1;

    for (i=1; i<=MAXP; i++)
    {
        for (j=1; j<=MAXP; j++)
        {
            for (k=1; k<=MAXP; k++)
            {
                v1=u1+(j!=1?u2/j:0)*(j-1)+(k!=1?u3/k:0)*(k-1);
                v2=u2+(i!=1?u1/i:0)*(i-1)+(k!=1?u3/k:0)*(k-1);
                v3=u3+(i!=1?u1/i:0)*(i-1)+(j!=1?u2/j:0)*(j-1);
                if (ok(v1, v2) && ok(v2, v3))
                {
                    Show(i+j+k, R);
                }
            }
        }
    }

    printf("%0.11f", minim);

    return 0;
}