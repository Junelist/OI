#include <iostream>
#include <cstdio>

int main()
{
    int n;
    scanf("%d", &n);

    for (int i = 0; i < n; ++i)
    {
        int k;
        scanf("%d", &k);
        char name[35];
        bool flag = true;
        double credit = 0.0, score = 0.0;
        double sum_credit = 0.0, sum_score = 0.0;
        for (int j = 0; j < k; ++j)
        {
            scanf("%s %lf %lf", name, &credit, &score);

            if (score < 60.0)
            {
                flag = false;
            }

            sum_credit += credit;
            sum_score += credit * score;

            getchar();
        }

        if (flag)
        {
            printf("%.2lf\n", sum_score / sum_credit);
        }
        else
        {
            printf("Sorry!\n");
        }

        if (i != n - 1)
        {
            printf("\n");
        }
    }

    return 0;
}