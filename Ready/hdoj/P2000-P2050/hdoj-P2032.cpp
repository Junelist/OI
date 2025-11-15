#include <iostream>
#include <cstdio>

int nums[32][32] = {0};

void nums_init()
{
    for (int i = 0; i < 31; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            if (j == 0 || j == i)
            {
                nums[i][j] = 1;
                continue;
            }
            nums[i][j] = nums[i - 1][j] + nums[i - 1][j - 1];
        }
    }
}

int main()
{
    nums_init();
    int n;
    while (scanf("%d", &n) == 1)
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j <= i; j++)
            {
                printf("%d ", nums[i][j]);
            }
            printf("\n");
        }
    }

    return 0;
}