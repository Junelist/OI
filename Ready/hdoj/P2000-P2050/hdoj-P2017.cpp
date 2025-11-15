#include <iostream>
#include <cstdio>
#include <string>

int main()
{
    int n;
    scanf("%d", &n);
    getchar();

    for (int i = 0; i < n; i++)
    {
        std::string line;
        std::getline(std::cin, line);

        int res = 0;
        for (char c : line)
        {
            if (c >= '0' && c <= '9')
            {
                res++;
            }
        }
        printf("%d\n", res);
    }
    return 0;
}