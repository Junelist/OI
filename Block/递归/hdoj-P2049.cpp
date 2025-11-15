#include <iostream>
#include <cstdio>

long long worng[22] = {0};
long long right[22][22] = {0};

void nums_init()
{
    worng[0] = 0;
    worng[1] = 1;

    for (int i = 2; i < 22; ++i)
    {
        worng[i] = i * (worng[i - 1] + worng[i - 2]);
    }

    for (int i = 1; i <= 21; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            if (j == 0 || j == i)
            {
                right[i][j] = 1;
            }
            else
            {
                right[i][j] = right[i - 1][j - 1] + right[i - 1][j];
            }
        }
    }
}

int main()
{
    nums_init();
    int n;
    scanf("%d", &n);

    for (int i = 0; i < n; ++i)
    {
        int N, M;
        scanf("%d %d", &N, &M);

        long long res = right[N][N - M] * worng[M - 1];
        printf("%lld\n", res);
    }

    return 0;
}