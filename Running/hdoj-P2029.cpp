#include <iostream>
#include <cstdio>
#include <string>

int main()
{
    int n;
    scanf("%d", &n);
    std::string line;
    for (int i = 0; i < n; i++)
    {
        std::cin >> line;
        int len = line.length();
        int middle = len / 2;
        int back = true;
        for (int i = 0; i < middle; i++)
        {
            if (line[i] != line[len - 1 - i])
            {
                back = false;
                printf("no\n");
                break;
            }
        }
        if (back)
            printf("yes\n");
    }

    return 0;
}