#include <iostream>
#include <cstdio>
#include <cmath>
#include <string>
#include <algorithm>

char nums[16] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'A', 'B', 'C', 'D', 'E', 'F'};

int main()
{
    int n, r;
    while (scanf("%d %d", &n, &r) == 2)
    {
        std::string res;
        bool nev = false;
        if (n < 0)
        {
            n = abs(n);
            nev = true;
        }
        while (n != 0)
        {
            res.push_back(nums[n % r]);
            n /= r;
        }
        std::reverse(res.begin(), res.end());

        if (nev)
        {
            printf("-");
        }
        std::cout << res << std::endl;
    }

    return 0;
}