#include <iostream>
#include <cstdio>
#include <cmath>

bool is_prime(int n)
{
    int limit = sqrt(n);
    for (int i = 2; i < limit; i++)
    {
        if (n % i == 0)
        {
            return false;
        }
    }

    return true;
}

int main()
{
    int x, y;
    while (scanf("%d %d", &x, &y) == 2)
    {
        if (x == 0 && y == 0)
        {
            break;
        }
        bool prime = true;
        for (int i = x; i <= y; i++)
        {
            prime = is_prime(i * i + i + 41);
            if (!prime)
            {
                printf("Sorry\n");
                break;
            }
        }
        if (prime)
        {
            printf("OK\n");
        }
    }

    return 0;
}