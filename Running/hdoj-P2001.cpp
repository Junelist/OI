#include <iostream>
#include <cstdio>
#include <cmath>

int main()
{
    double x1, y1;
    double x2, y2;
    while (scanf("%lf %lf %lf %lf", &x1, &y1, &x2, &y2) == 4)
    {
        double x = std::abs(x2 - x1);
        double y = std::abs(y2 - y1);

        double res = std::sqrt(x * x + y * y);
        printf("%.2lf\n", res);
    }
    return 0;
}