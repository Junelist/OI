#include <iostream>
#include <cstdio>

int f(int x)
{
    if (x == 2)
    {
        return 1;
    }
    if (x == 3)
    {
        return 2;
    }

    return f(x - 1) + f(x - 2);
}

int main()
{
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        int x;
        scanf("%d", &x);

        printf("%d\n", f(x));
    }

    return 0;
}