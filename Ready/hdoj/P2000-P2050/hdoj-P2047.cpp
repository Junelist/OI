#include <iostream>
#include <cstdio>

long long has[45] = {0};
long long no_has[45] = {0};
long long nums[45] = {0};

void nums_init()
{
    has[0] = 1;
    has[1] = 2;

    no_has[0] = 2;
    no_has[1] = 6;

    nums[0] = 3;
    nums[1] = 8;

    for (int i = 2; i < 40; i++)
    {
        nums[i] = 3 * no_has[i - 1] + 2 * no_has[i - 2];
        has[i] = no_has[i - 1];
        no_has[i] = 2 * nums[i - 1];
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