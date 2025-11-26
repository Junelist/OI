#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cstring>
using namespace std;

int main()
{
    int total;
    int N, C, T;
    int VR, VT1, VT2;
    int p[105];
    double dp[105];

    while (scanf("%d", &total) == 1)
    {
        scanf("%d %d %d", &N, &C, &T);
        scanf("%d %d %d", &VR, &VT1, &VT2);
        for (int i = 1; i <= N; i++)
        {
            scanf("%d", &p[i]);
        }
        p[0] = 0;
        p[N + 1] = total;

        for (int i = 0; i <= N + 1; i++)
        {
            dp[i] = 1e9;
        }
        dp[0] = 0;

        for (int i = 1; i <= N + 1; i++)
        {
            for (int j = 0; j < i; j++)
            {
                int d = p[i] - p[j];
                double time_j_to_i;
                if (d <= C)
                {
                    time_j_to_i = 1.0 * d / VT1;
                }
                else
                {
                    time_j_to_i = 1.0 * C / VT1 + 1.0 * (d - C) / VT2;
                }
                if (j > 0)
                {
                    time_j_to_i += T;
                }
                dp[i] = min(dp[i], dp[j] + time_j_to_i);
            }
        }

        double rabbit_time = 1.0 * total / VR;
        if (dp[N + 1] < rabbit_time)
        {
            printf("What a pity rabbit!\n");
        }
        else
        {
            printf("Good job,rabbit!\n");
        }
    }
    return 0;
}