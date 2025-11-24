#include <iostream>
#include <cstdio>
#include <cstring>

int main()
{
    char x;
    int y;
    int n;
    scanf("%d", &n);
    getchar();
    for (int i = 0; i < n; i++)
    {
        scanf("%c %d", &x, &y);
        if (isupper(x))
        {
            printf("%d\n", y + (int)(x - 'A') + 1);
        }
        else
        {
            printf("%d\n", y - (int)(x - 'a') - 1);
        }
        getchar();
    }

    return 0;
}