#include <iostream>
#include <cstdio>
using namespace std;

long long nums[10005];

void nums_init()
{
    nums[0] = 2;
    nums[1] = 7;
    for (int i = 2; i < 10005; ++i)
    {
        nums[i] = nums[i - 1] + 4 * i + 1;
    }
}

int main()
{
    nums_init();
    int t;
    scanf("%d", &t);
    int n;

    while (--t)
    {
        scanf("%d", &n);
        printf("%lld\n", nums[n - 1]);
    }
    return 0;
}