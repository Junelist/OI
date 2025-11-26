#include <algorithm>

using namespace std;

typedef struct
{
    int u;
    int v;
    int w;
} edge;

int find(int arr[], int x)
{
    if (arr[x] != x)
    {
        arr[x] = find(arr, arr[x]);
    }
    return arr[x];
}

void merge(int arr[], int a, int b)
{
    int fa = find(arr, a);
    int fb = find(arr, b);

    if (fa != fb)
    {
        arr[fa] = fb;
    }
}

bool comp(edge &a, edge &b)
{
    return a.w < b.w;
}

int KrusKal(edge edges[], int size, int nums)
{
    sort(edges, edges + size, comp);
    int *arr = new int[nums];

    for (int i = 0; i < nums; ++i)
    {
        arr[i] = i;
    }

    int totalWeight = 0;
    int edgesAdded = 0;

    for (int i = 0; i < size; ++i)
    {
        if (edgesAdded == (nums - 1))
        {
            break;
        }

        if (find(arr, edges[i].u) != find(arr, edges[i].v))
        {
            merge(arr, edges[i].u, edges[i].v);
            ++edgesAdded;
            totalWeight += edges[i].w;
        }
    }

    delete[] arr;
    if (edgesAdded != nums - 1)
    {
        return -1; // 图不连通
    }
    return totalWeight;
}