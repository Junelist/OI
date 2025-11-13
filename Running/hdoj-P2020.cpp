#include <iostream>
#include <algorithm>
#include <cstdio>
#include <cmath>

int nums[105] = {0};

bool comp(int a, int b)
{
    return abs(a) > abs(b);
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

        for (int i = 0; i < n; i++)
        {
            scanf("%d", &nums[i]);
        }

        std::sort(nums, nums + n, comp);

        for (int i = 0; i < n; i++)
        {
            printf("%d ", nums[i]);
        }

        printf("\n");
    }

    return 0;
}