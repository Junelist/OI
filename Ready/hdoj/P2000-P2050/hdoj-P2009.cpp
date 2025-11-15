#include <iostream>
#include <cstdio>
#include <cmath>

int main()
{
    int n, m;
    while (scanf("%d %d", &n, &m) == 2)
    {
        double res = n;
        double copy = n;
        for (int i = 0; i < m - 1; i++)
        {
            copy = sqrt(copy);
            res += copy;
        }

        printf("%.2lf\n", res);
    }

    return 0;
}