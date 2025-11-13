#include <iostream>
#include <cstdio>
#include <cstring>
#include <cctype>

bool isKeyword(const char *str)
{
    const char *keywords[] = {
        "auto", "break", "case", "char", "const", "continue", "default", "do",
        "double", "else", "enum", "extern", "float", "for", "goto", "if",
        "int", "long", "register", "return", "short", "signed", "sizeof", "static",
        "struct", "switch", "typedef", "union", "unsigned", "void", "volatile", "while"};
    for (int i = 0; i < 32; i++)
    {
        if (strcmp(str, keywords[i]) == 0)
        {
            return true;
        }
    }
    return false;
}
bool isLegalIdentifier(const char *str)
{
    if (str[0] == '\0')
    {
        return false;
    }

    if (!isalpha(str[0]) && str[0] != '_')
    {
        return false;
    }

    for (int i = 1; str[i] != '\0'; i++)
    {
        if (!isalnum(str[i]) && str[i] != '_')
        {
            return false;
        }
    }

    if (isKeyword(str))
    {
        return false;
    }

    return true;
}

char line[55];

int main()
{
    int n;
    while (scanf("%d", &n) == 1)
    {
        getchar();
        for (int i = 0; i < n; i++)
        {
            std::cin.getline(line, 55);
            if (isLegalIdentifier(line))
            {
                printf("yes\n");
            }
            else
            {
                printf("no\n");
            }
        }
    }
    return 0;
}