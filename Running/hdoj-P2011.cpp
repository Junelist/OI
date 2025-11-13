#include <iostream>
#include <cstdio>

int main()
{
    int n = 0;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        int num;
        scanf("%d", &num);
        double res = 1;
        int times = -1;
        for (int j = 1; j < num; j++)
        {
            res += times * (1.0 / (j + 1));
            times *= -1;
        }
        printf("%.2lf\n", res);
    }

    return 0;
}