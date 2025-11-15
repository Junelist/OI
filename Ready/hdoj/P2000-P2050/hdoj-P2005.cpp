#include <iostream>
#include <cstdio>

int main()
{
    int year, month, day;
    int months[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    while (scanf("%d/%d/%d", &year, &month, &day) == 3)
    {
        int sum = 0;
        for (int i = 0; i < month - 1; i++)
        {
            sum += months[i];
        }
        sum += day;
        if (((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) && (month >= 3))
        {
            sum++;
        }

        printf("%d\n", sum);
    }
    return 0;
}