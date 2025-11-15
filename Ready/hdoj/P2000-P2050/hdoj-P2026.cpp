#include <iostream>
#include <cstdio>
#include <cstring>
#include <cctype>

char line[105];

int main()
{
    while (std::cin.getline(line, 105))
    {
        for (int i = 0; line[i] != '\0'; i++)
        {
            if (isalpha(line[i]))
            {
                if (i == 0 || line[i - 1] == ' ')
                {
                    line[i] = toupper(line[i]);
                }
            }
        }

        printf("%s\n", line);
    }

    return 0;
}