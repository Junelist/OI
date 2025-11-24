#include <iostream>
#include <cstdio>

int socre[7] = {7, 6, 5, 4, 3, 2};

int main()
{
    int n;
    scanf("%d", &n);
    long long Ball, P, O;
    for (int i = 0; i < n; i++)
    {
        scanf("%lld %lld %lld", &Ball, &P, &O);

        if (Ball > 6)
        {
            P += 8 * (Ball - 6);
            for (int i = 0; i < 6; i++)
            {
                P += socre[i];
            }
        }
        else
        {
            for (int i = 0; i < Ball; i++)
            {
                P += socre[i];
            }
        }

        if (P >= O)
        {
            printf("Yes\n");
        }
        else
        {
            printf("No\n");
        }
    }

    return 0;
}