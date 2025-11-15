#include <iostream>
#include <climits>
#include <cstdio>
#include <cmath>

int main()
{
    int m, n;
    while (scanf("%d %d", &m, &n) == 2)
    {
        int **arr = new int *[m];
        for (int i = 0; i < m; i++)
        {
            arr[i] = new int[n];
        }

        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                scanf("%d", &arr[i][j]);
            }
        }

        int pos_m = 0, pos_n = 0, max = 0;
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (abs(arr[i][j]) > abs(max))
                {
                    pos_m = i;
                    pos_n = j;
                    max = arr[i][j];
                }
            }
        }

        printf("%d %d %d", pos_m + 1, pos_n + 1, max);
    }
    return 0;
}