#include <iostream>
#include <cstdio>
#include <cstring>

char line[105];
int nums[5] = {0};

int main()
{
    int n;
    scanf("%d", &n);
    getchar();

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            nums[j] = 0;
        }
        std::cin.getline(line, 105);

        for (int j = 0; line[j] != '\0'; j++)
        {
            if (line[j] == 'a')
            {
                nums[0]++;
            }
            else if (line[j] == 'e')
            {
                nums[1]++;
            }
            else if (line[j] == 'i')
            {
                nums[2]++;
            }
            else if (line[j] == 'o')
            {
                nums[3]++;
            }
            else if (line[j] == 'u')
            {
                nums[4]++;
            }
        }

        printf("a:%d\n", nums[0]);
        printf("e:%d\n", nums[1]);
        printf("i:%d\n", nums[2]);
        printf("o:%d\n", nums[3]);
        printf("u:%d\n", nums[4]);

        if (i < n - 1)
        {
            printf(" \n");
        }
    }

    return 0;
}