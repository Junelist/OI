#include <iostream>
#include <cstdio>
#include <algorithm>

using namespace std;

double nums[3] = {0};

bool comp(double a, double b)
{
    return a < b + 0.000001;
}

int main()
{
    int m;
    while (scanf("%d", &m) == 1)
    {

        for (int i = 0; i < m; i++)
        {
            scanf("%lf %lf %lf", &nums[0], &nums[1], &nums[2]);
            sort(nums, nums + 3, comp);

            if (nums[0] + nums[1] > nums[2] + 0.000001)
            {
                printf("YES\n");
            }
            else
            {
                printf("NO\n");
            }
        }
    }

    return 0;
}