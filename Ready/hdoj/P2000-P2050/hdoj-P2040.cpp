#include <iostream>
#include <cstdio>

using namespace std;

int sum_of_factor(int a)
{
    int sum = 0;
    int limit = a / 2;
    for (int i = 1; i <= limit; i++)
        if (a % i == 0)
            sum += i;

    return sum;
}

int main()
{
    int n;
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        int A, B;
        scanf("%d %d", &A, &B);

        int sum_a = sum_of_factor(A), sum_b = sum_of_factor(B);

        if ((sum_a == B) && (sum_b == A))
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