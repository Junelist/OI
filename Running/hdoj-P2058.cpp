#include <iostream>
#include <cstdio>
#include <cmath>

using namespace std;

int main()
{
    int n, m;
    while (scanf("%d %d", &n, &m) == 2)
    {
        if (n == 0 && m == 0)
        {
            break;
        }
        for (int i = sqrt(2 * m); i >= 1; --i)
        {
            if ((2 * m - i * (i - 1)) % (2 * i) == 0)
            {
                int left = (2 * m - i * (i - 1)) / (2 * i);
                int right = left + i - 1;
                if (right <= n)
                {
                    printf("[%d,%d]\n", left, right);
                }
                else
                {
                    break;
                }
            }
        }
    }

    return 0;
}