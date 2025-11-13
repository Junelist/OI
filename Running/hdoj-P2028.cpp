#include <iostream>
#include <cstdio>

int gcd(int a, int b)
{
    return ((b == 0) ? a : gcd(b, a % b));
}

int main()
{
    int n;
    while (scanf("%d", &n) == 1)
    {
        int *arr = new int[n];
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &arr[i]);
        }
        if (n == 1)
        {
            printf("%d\n", arr[0]);
            continue;
        }

        long long res = arr[0] * arr[1] / gcd(arr[0], arr[1]);
        for (int i = 2; i < n; i++)
        {
            res = res * arr[i] / gcd(res, arr[i]);
        }

        printf("%d\n", res);
        delete[] arr;
    }

    return 0;
}