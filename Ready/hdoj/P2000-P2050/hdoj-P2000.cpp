#include <iostream>
#include <cstdio>
#include <algorithm>

bool comp(char a, char b)
{
    return a < b;
}

int main()
{
    char s[3];
    while (scanf("%c%c%c", &s[0], &s[1], &s[2]) == 3)
    {
        std::sort(s, s + 3, comp);
        printf("%c %c %c\n", s[0], s[1], s[2]);
        getchar();
    }
    return 0;
}