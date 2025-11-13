#include <iostream>
#include <cstdio>

int main()
{
    int n, m;
    while (scanf("%d %d", &n, &m) == 2)
    {
        int pos = 0;
        int limit = n / m;
        for (int i = 0; i < limit; i++)
        {
            long long res = 0;
            for (int j = 0; j < m; j++)
            {
                res += 2 * (pos + 1);
                pos++;
            }
            printf("%d ", res / m);
        }

        long long res = 0;
        int more = n - pos;
        for (; pos < n; pos++)
            res += 2 * (pos + 1);
        if (more > 0)
            printf("%d ", res / more);
        printf("\n");
    }

    return 0;
}