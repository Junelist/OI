#include <iostream>
#include <cstdio>

int nums[100] = {0};

int main()
{
    int m, n;
    while (scanf("%d %d", &m, &n) == 2)
    {
        int pos = -1;
        for (int i = m; i <= n; i++)
        {
            int last = i % 10;
            int middle = (i / 10) % 10;
            int first = (i / 100);

            int copy = last * last * last + middle * middle * middle + first * first * first;
            if (copy == i)
            {
                nums[++pos] = i;
            }
        }

        if (pos == -1)
        {
            printf("no\n");
        }
        else
        {
            for (int i = 0; i < pos; i++)
            {
                printf("%d ", nums[i]);
            }
            printf("%d\n", nums[pos]);
        }
    }

    return 0;
}