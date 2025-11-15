#include <iostream>
#include <cstdio>

long long nums[55] = {0};

void nums_init()
{
    nums[0] = 1;
    nums[1] = 2;

    for (int i = 2; i < 50; i++)
    {
        nums[i] = nums[i - 1] + nums[i - 2];
    }
}

int main()
{
    nums_init();
    int n;
    while (scanf("%d", &n) == 1)
    {
        printf("%lld\n", nums[n - 1]);
    }

    return 0;
}