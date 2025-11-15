#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
    int n;
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        int a;
        scanf("%d", &a);

        int res = 1;
        for (int i = 0; i < a; i++)
        {
            res *= 2;
        }

        res += 2;
        printf("%d\n", res);
    }

    return 0;
}