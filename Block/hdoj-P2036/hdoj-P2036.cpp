#include <stdio.h>
#include <math.h>
typedef struct point
{
    double x;
    double y;
} Point;

int main()
{
    Point p[100];
    int n, i;
    double areaSum;
    while (scanf("%d", &n) && n)
    {
        areaSum = 0;
        for (i = 0; i < n; i++)
            scanf("%lf%lf", &p[i].x, &p[i].y);
        for (i = 1; i < n; i++)
        {
            areaSum += (p[i - 1].x * p[i].y - p[i].x * p[i - 1].y) / 2.0;
        }
        areaSum += (p[n - 1].x * p[0].y - p[0].x * p[n - 1].y) / 2.0;
        printf("%.1lf\n", areaSum);
    }
}