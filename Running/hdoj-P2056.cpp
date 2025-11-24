#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cmath>

using namespace std;

double x[4], y[4];

bool comp(double a, double b)
{
    return a < b;
}

int main()
{
    while (scanf("%lf %lf %lf %lf %lf %lf %lf %lf", &x[0], &y[0], &x[1], &y[1], &x[2], &y[2], &x[3], &y[3]) == 8)
    {
        double len = fabs(x[1] - x[0]) + fabs(x[3] - x[2]);
        double wid = fabs(y[1] - y[0]) + fabs(y[3] - y[2]);
        sort(x, x + 4, comp);
        sort(y, y + 4, comp);

        len -= x[3] - x[0];
        wid -= y[3] - y[0];

        if (len < 0 || wid < 0)
        {
            printf("0.00\n");
            continue;
        }
        printf("%.2lf\n", len * wid);
    }

    return 0;
}