/*提交注释*/
#include <iostream>
#include <cstdio>
#include <cstring>

char nums1[5000], nums2[5000];

void format_num_str(char *s)
{
    int len = strlen(s);
    if (len == 0)
        return;

    if (strchr(s, '.'))
    {
        for (int i = len - 1; i >= 0 && s[i] == '0'; --i)
        {
            s[i] = '\0';
            len--;
        }
    }

    if (len > 0 && s[len - 1] == '.')
    {
        s[len - 1] = '\0';
        len--;
    }

    // 处理前导0
    bool has_minus = (s[0] == '-');
    int start = has_minus ? 1 : 0;
    int pos = start;

    // 跳过前导0，但要保留一位（除非后面是小数点）
    while (s[pos] == '0' && s[pos + 1] != '.' && s[pos + 1] != '\0')
    {
        pos++;
    }

    // 如果整个数字部分都是0
    if (pos == (len - start) || (s[pos] == '\0'))
    {
        if (has_minus)
        {
            s[0] = '0';
            s[1] = '\0';
        }
        else
        {
            s[0] = '0';
            s[1] = '\0';
        }
        return;
    }

    // 移动字符串
    if (pos > start)
    {
        int new_len = len - (pos - start);
        for (int i = start; i <= new_len; i++)
        {
            s[i] = s[pos + (i - start)];
        }
    }
}
int main()
{
    while (scanf("%s %s", nums1, nums2) == 2)
    {
        format_num_str(nums1);
        format_num_str(nums2);

        if (strcmp(nums1, nums2) == 0)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }

        printf("%s\n%s\n", nums1, nums2);

        memset(nums1, '\0', sizeof(nums1));
        memset(nums2, '\0', sizeof(nums2));
    }

    return 0;
}