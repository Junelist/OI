#include <iostream>
#include <cstdio>

int nums[105] = {0};

int find_money(int n)
{
    int res = 0;

    res += n / 100;
    n %= 100;
    res += n / 50;
    n %= 50;
    res += n / 10;
    n %= 10;
    res += n / 5;
    n %= 5;
    res += n / 2;
    n %= 2;
    res += n;

    return res;
}

int main()
{
    int n;
    while (scanf("%d", &n) == 1)
    {
        if (n == 0)
        {
            break;
        }

        int sum = 0;
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &nums[i]);
            sum += find_money(nums[i]);
        }

        printf("%d\n", sum);
    }

    return 0;
}