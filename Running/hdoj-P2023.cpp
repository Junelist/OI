#include <iostream>
#include <cstdio>

int arr[55][7] = {0};
double students[55] = {0.0};
double subjects[7] = {0.0};

int main()
{
    int n, m;
    while (scanf("%d %d", &n, &m) == 2)
    {
        for (int i = 0; i < n; i++)
        {
            students[i] = 0.0;
        }
        for (int i = 0; i < m; i++)
        {
            subjects[i] = 0;
        }
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                scanf("%d", &arr[i][j]);
                students[i] += arr[i][j];
                subjects[j] += arr[i][j];
            }
        }
        for (int i = 0; i < n; i++)
        {
            students[i] /= m;
            printf("%.2lf ", students[i]);
        }
        printf("\n");
        for (int i = 0; i < m; i++)
        {
            subjects[i] /= n;
            printf("%.2lf ", subjects[i]);
        }
        printf("\n");

        int people = 0;
        for (int i = 0; i < n; i++)
        {
            bool all = true;
            for (int j = 0; j < m; j++)
            {
                if (arr[i][j] < subjects[j])
                {
                    all = false;
                    break;
                }
            }

            if (all)
            {
                people++;
            }
        }

        printf("%d\n\n", people);
    }

    return 0;
}