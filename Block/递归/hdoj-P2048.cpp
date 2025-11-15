#include <iostream>
#include <cstdio>

using namespace std;

double total[22] = {0};
double worng[22] = {0};

void nums_init()
{
    total[0] = 1;
    for (int i = 1; i < 22; ++i)
    {
        total[i] = (i + 1) * total[i - 1];
    }

    worng[0] = 0;
    worng[1] = 1;

    for (int i = 2; i < 22; ++i)
    {
        worng[i] = i * (worng[i - 1] + worng[i - 2]);
    }
}

int main()
{
    nums_init();
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; ++i)
    {
        int x;
        scanf("%d", &x);
        double res = (worng[x - 1] / total[x - 1]) * 100.00;
        printf("%.2lf%%\n", res);
    }

    return 0;
}