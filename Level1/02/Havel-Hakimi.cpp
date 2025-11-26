#include <algorithm>

using namespace std;

// 判断是否为全零序列
bool All_Zero(int arr[], int size)
{
    for (int i = 0; i < size; ++i)
    {
        if (arr[i] != 0)
        {
            return false;
        }
    }

    return true;
}

// 判断是否有负数
bool Have_Negative(int arr[], int size)
{
    for (int i = 0; i < size; ++i)
    {
        if (arr[i] < 0)
        {
            return true;
        }
    }

    return false;
}

// sort用的comp函数旨在让sort更显示说明其排序
bool comp(int a, int b)
{
    return a > b;
}

// Havel-Hakimi算法
bool Havel_Hakimi(int arr[], int size)
{
    sort(arr, arr + size, comp); // 非递增

    int i = 0; // 首位起始用其模拟数组的移除
    while (!All_Zero(arr + i, size - i))
    {
        if (Have_Negative(arr + i, size - i))
        {
            return false;
        }

        if (arr[i] > size - (i + 1))
        {
            return false;
        }

        // 修改i后连续arr[i]个节点
        for (int j = 1; j <= arr[i]; ++j)
        {
            arr[i + j] -= 1;
        }

        ++i;

        sort(arr + i, arr + size, comp);
    }

    return true;
}