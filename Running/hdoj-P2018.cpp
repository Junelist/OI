#include <iostream>
#include <cstdio>

int nums[60] = {0};

void nums_init()
{
    nums[1] = 1;
    nums[2] = 2;
    nums[3] = 3;
    for (int i = 4; i < 60; i++)
        nums[i] = nums[i - 1] + nums[i - 3];
}

int main()
{
    nums_init();
    int n;
    while (scanf("%d", &n) == 1)
    {
        if (n == 0)
        {
            break;
        }

        printf("%d\n", nums[n]);
    }

    return 0;
}