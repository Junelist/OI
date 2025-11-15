#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int countChinese(const string &text)
{
    int count = 0;
    int len = text.size();
    for (int i = 0; i < len;)
    {
        if ((unsigned char)text[i] > 127)
        {
            if (i + 1 < len && (unsigned char)text[i + 1] > 127)
            {
                count++;
                i += 2;
            }
            else
            {
                i++;
            }
        }
        else
        {
            i++;
        }
    }
    return count;
}

int main()
{
    int n;

    cin >> n;
    getchar();

    for (int i = 0; i < n; i++)
    {
        string text;
        getline(cin, text);
        cout << countChinese(text) << endl;
    }

    return 0;
}