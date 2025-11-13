#include <iostream>
#include <cstdio>

int main()
{
    int start, end;
    while (scanf("%d %d", &start, &end) == 2)
    {
        if (end < start)
        {
            std::swap(start, end);
        }
        int odd = 0, even = 0;
        for (int i = start; i <= end; i++)
        {
            if (i & 1)
            {
                odd += i * i * i;
            }
            else
            {
                even += i * i;
            }
        }

        printf("%d %d\n", even, odd);
    }

    return 0;
}