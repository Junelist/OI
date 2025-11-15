#include <iostream>
#include <cstdio>

int nums[105] = {0};
int n, m;

int find_pos(int left, int right)
{
    if (left == right)
    {
        return left;
    }

    int middle = (left + right) / 2;
    if (nums[middle] == m)
    {
        return middle;
    }
    else if (nums[middle] > m)
    {
        find_pos(left, middle);
    }
    else
    {
        find_pos(middle + 1, right);
    }
}

int main()
{
    while (scanf("%d %d", &n, &m) == 2)
    {
        if (n == 0 && m == 0)
        {
            break;
        }

        for (int i = 0; i < n; i++)
        {
            scanf("%d", &nums[i]);
        }

        int pos = find_pos(0, n - 1);
        for (int i = n; i > pos; i--)
        {
            nums[i] = nums[i - 1];
        }
        nums[pos] = m;

        for (int i = 0; i <= n; i++)
        {
            printf("%d ", nums[i]);
        }
        printf("\n");
    }

    return 0;
}