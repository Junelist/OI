#include <iostream>
#include <cstdio>

int main()
{
    int num;
    while (scanf("%d", &num) == 1)
    {
        int n;
        long long res = 1;
        for (int i = 0; i < num; i++)
        {
            scanf("%d", &n);
            if (n & 1)
            {
                res *= n;
            }
        }

        printf("%d\n", res);
    }

    return 0;
}