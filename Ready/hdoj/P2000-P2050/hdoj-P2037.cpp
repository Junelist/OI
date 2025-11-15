#include <iostream>
#include <cstdio>
#include <utility>
#include <algorithm>

using namespace std;

pair<int, int> arr[105];

bool comp(pair<int, int> &a, pair<int, int> &b)
{
    if (a.second != b.second)
    {
        return a.second < b.second;
    }

    return a.first > b.first;
}

int main()
{
    int n;
    while (scanf("%d", &n) == 1)
    {
        if (n == 0)
        {
            break;
        }

        int first, second;
        for (int i = 0; i < n; i++)
        {
            scanf("%d %d", &first, &second);
            arr[i].first = first;
            arr[i].second = second;
        }

        sort(arr, arr + n, comp);

        // for (int i = 0; i < n; i++)
        // {
        //     printf("%d %d\n", arr[i].first, arr[i].second);
        // }
        int final = arr[0].second;
        int index = 1;
        for (int i = 1; i < n; i++)
        {
            if (arr[i].first >= final)
            {
                final = arr[i].second;
                index++;
            }
        }

        printf("%d\n", index);
    }

    return 0;
}