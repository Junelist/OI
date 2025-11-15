#include <iostream>
#include <cstdio>

int main()
{
    int n;
    while (scanf("%d", &n) == 1)
    {
        if (n == 0)
            break;

        int zero = 0, up = 0, down = 0;
        double num;
        for (int i = 0; i < n; i++)
        {
            scanf("%lf", &num);
            if (abs(num - 0.0) <= 0.000001)
            {
                zero++;
            }
            else if (num - 0.0 > 0.000001)
            {
                up++;
            }
            else
            {
                down++;
            }
        }

        printf("%d %d %d\n", down, zero, up);
    }

    return 0;
}