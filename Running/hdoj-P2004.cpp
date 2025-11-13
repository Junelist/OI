#include <iostream>
#include <cstdio>

int main()
{
    int score;
    while (scanf("%d", &score) == 1)
    {
        char res;
        if ((score >= 90) && (score <= 100))
        {
            res = 'A';
        }
        else if ((score >= 80) && (score <= 89))
        {
            res = 'B';
        }
        else if ((score >= 70) && (score <= 79))
        {
            res = 'C';
        }
        else if ((score >= 60) && (score <= 69))
        {
            res = 'D';
        }
        else if ((score >= 0) && (score <= 59))
        {
            res = 'E';
        }
        else
        {
            printf("Score is error!\n");
            continue;
        }
        printf("%c\n", res);
    }

    return 0;
}