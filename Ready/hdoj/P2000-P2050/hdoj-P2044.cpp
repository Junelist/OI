#include <iostream>
#include <cstdio>

long long nums[55] = {0};

void nums_init()
{
    nums[0] = 0;
    nums[1] = 1;
    nums[2] = 2;

    for (int i = 3; i <= 50; i++)
    {
        nums[i] = nums[i - 1] + nums[i - 2];
    }
}

int main()
{
    nums_init();
    int n;
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        int a, b;
        scanf("%d %d", &a, &b);
        printf("%lld\n", nums[b - a]);
    }
    return 0;
}