#include <iostream>
#include <cstdio>
#include <cstring>

using namespace std;

bool is_good(char *text)
{
    int len = strlen(text);
    if (len < 8 || len > 16)
    {
        return false;
    }

    bool has_symbol[4] = {false, false, false, false};
    for (int i = 0; i < len; i++)
    {
        if (text[i] >= 'A' && text[i] <= 'Z')
        {
            has_symbol[0] = true;
        }
        else if (text[i] >= 'a' && text[i] <= 'z')
        {
            has_symbol[1] = true;
        }
        else if (text[i] >= '0' && text[i] <= '9')
        {
            has_symbol[2] = true;
        }
        else if (text[i] == '~' || text[i] == '!' || text[i] == '@' || text[i] == '#' || text[i] == '$' || text[i] == '%' || text[i] == '^')
        {
            has_symbol[3] = true;
        }
    }
    int res = 0;
    for (int i = 0; i < 4; i++)
    {
        if (has_symbol[i])
        {
            res++;
        }
    }

    if (res >= 3)
    {
        return true;
    }
    return false;
}

int main()
{
    int n;
    scanf("%d", &n);
    getchar();
    for (int i = 0; i < n; i++)
    {
        char line[55];
        cin.getline(line, 55);
        if (is_good(line))
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }

    return 0;
}