#include <iostream>
#include <cstdio>
#include <cmath>

int main()
{
    double num;
    while (scanf("%lf", &num) == 1)
    {
        double res = std::abs(num);
        printf("%.2lf\n", res);
    }

    return 0;
}