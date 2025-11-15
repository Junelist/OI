#include <iostream>
#include <cstdio>
#include <algorithm>

int nums[105];

int find_min(int *arr, int size)
{
    int pos = 0;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] < arr[pos])
            pos = i;
    }
    return pos;
}

int main()
{
    int n;
    while (scanf("%d", &n) == 1)
    {
        for (int i = 0; i < n; i++)
            scanf("%d", &nums[i]);

        int min_pos = find_min(nums, n);
        std::swap(nums[0], nums[min_pos]);

        for (int i = 0; i < n; i++)
            printf("%d ", nums[i]);

        printf("\n");
    }

    return 0;
}