#include <iostream>
#include <cstdio>
#include <algorithm>

int A[105] = {0};
int B[105] = {0};
int res[105] = {0};

bool comp(int a, int b)
{
    return a < b;
}

int main()
{
    int n, m;
    while (scanf("%d %d", &n, &m) == 2)
    {
        int pos = -1;
        if (n == 0 && m == 0)
        {
            break;
        }

        for (int i = 0; i < n; i++)
        {
            scanf("%d", &A[i]);
        }
        for (int i = 0; i < m; i++)
        {
            scanf("%d", &B[i]);
        }

        std::sort(A, A + n, comp);
        std::sort(B, B + m, comp);

        int i = 0, j = 0;
        while (i != n && j != m)
        {
            if (A[i] == B[j])
            {
                i++;
                j++;
            }
            else if (A[i] < B[j])
            {
                res[++pos] = A[i];
                i++;
            }
            else
            {
                j++;
            }

            /*假设B的长度为0便不会执行循环A也不会进入res*/
            // if (j == m && i != n)
            // {
            //     for (int k = i; k < n; k++)
            //     {
            //         res[++pos] = A[k];
            //     }
            // }
        }
        while (i < n)
        {
            res[++pos] = A[i];
            i++;
        }

        if (pos == -1)
        {
            printf("NULL");
        }
        for (int i = 0; i <= pos; i++)
        {
            printf("%d ", res[i]);
        }

        printf("\n");
    }

    return 0;
}
