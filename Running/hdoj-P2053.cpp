#include <iostream>
#include <cstdio>

int sum_f(int n)
{
    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            ++sum;
        }
    }

    return sum;
}

int main()
{
    int n;
    while (scanf("%d", &n) == 1)
    {
        if (sum_f(n) & 1)
        {
            printf("1\n");
        }
        else
        {
            printf("0\n");
        }
    }

    return 0;
}