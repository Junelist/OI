#include <cstdio>

int main()
{
    long long n, m, v;
    while (scanf("%llX %llX", &n, &m) == 2)
    {
        v = n + m;
        if (v < 0)
        {
            v = -v;
            printf("-%llX\n", v);
        }
        else
        {
            printf("%llX\n", v);
        }
    }
    return 0;
}