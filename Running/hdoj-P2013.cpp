#include <iostream>
#include <cstdio>
#include <cmath>

int main()
{
    int n;
    while (scanf("%d", &n) == 1)
    {
        long long res = pow(2.0, n - 1.0) * 3 - 2;
        printf("%lld\n", res);
    }

    return 0;
}