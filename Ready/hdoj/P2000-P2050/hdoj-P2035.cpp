#include <iostream>
#include <cstdio>

long long fast_pow(long long a, long long b, int mod)
{
    long long res = 1;
    while (b != 0)
    {
        if (b & 1)
        {
            res = (res * a) % mod;
        }

        a = (a * a) % mod;
        b >>= 1;
    }

    return res;
}

int main()
{
    int a, b;
    while (scanf("%d %d", &a, &b) == 2)
    {
        if (a == 0 && b == 0)
        {
            break;
        }

        int res = fast_pow(a, b, 1000);
        printf("%d\n", res);
    }

    return 0;
}