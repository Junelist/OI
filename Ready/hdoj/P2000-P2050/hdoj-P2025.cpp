#include <iostream>
#include <cstdio>
#include <cstring>

char line[105];

int main()
{
    while (std::cin.getline(line, 105))
    {
        char m = line[0];
        for (int i = 0; line[i] != '\0'; i++)
        {
            m = (m < line[i]) ? line[i] : m;
        }

        for (int i = 0; line[i] != '\0'; i++)
        {
            printf("%c", line[i]);
            if (line[i] == m)
            {
                printf("(max)");
            }
        }
        printf("\n");
    }

    return 0;
}