#include <iostream>
#include <cstdio>
#include <algorithm>

double arr[105];

bool comp(double x, double y)
{
    return x < y + 0.000001;
}

int main()
{
    int x;
    while (scanf("%d", &x) == 1)
    {
        for (int i = 0; i < x; i++)
            scanf("%lf", &arr[i]);
        std::sort(arr, arr + x, comp);

        double res = 0.0;
        for (int i = 1; i < x - 1; i++)
            res += arr[i];

        printf("%.2lf\n", res / (x - 2.0));
    }

    return 0;
}