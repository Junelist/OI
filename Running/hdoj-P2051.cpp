#include <iostream>
#include <cstdio>

int nums[10] = {0};

int main()
{
    int n;
    while (scanf("%d", &n) == 1)
    {
        if (n == 0)
        {
            printf("0");
        }
        int i = 0;
        while (n != 0)
        {
            nums[i] = n % 2;
            n /= 2;
            i++;
        }
        for (int j = i - 1; j >= 0; j--)
        {
            printf("%d", nums[j]);
        }
        printf("\n");
    }

    return 0;
}