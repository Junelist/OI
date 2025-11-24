#include <iostream>
#include <cstdio>

int main()
{
    int total;
    int N, C, T;
    int VR, VT1, VT2;
    int arr[100];

    while (scanf("%d", &total) == 1)
    {
        scanf("%d %d %d", &N, &C, &T);
        scanf("%d %d %d", &VR, &VT1, &VT2);
        for (int i = 0; i < N; i++)
        {
            scanf("%d", &arr[i]);
        }

        double rabbit = total / VR;
    }
}