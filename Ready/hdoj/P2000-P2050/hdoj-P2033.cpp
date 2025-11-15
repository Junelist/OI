#include <iostream>
#include <cstdio>

int main()
{
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        int AH, AM, AS, BH, BM, BS;
        scanf("%d %d %d %d %d %d", &AH, &AM, &AS, &BH, &BM, &BS);

        int H, M, S;
        S = AS + BS;
        M = AM + BM;
        H = AH + BH;

        M += S / 60;
        H += M / 60;

        S %= 60;
        M %= 60;

        printf("%d %d %d\n", H, M, S);
    }

    return 0;
}