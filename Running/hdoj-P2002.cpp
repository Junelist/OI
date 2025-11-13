#include <iostream>
#include <cstdio>

#define PI 3.1415927

int main()
{
    double r;
    while (scanf("%lf", &r) == 1)
    {
        double res = 4.0 * PI * r * r * r / 3.0;
        printf("%.3lf\n", res);
    }
    return 0;
}