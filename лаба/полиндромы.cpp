#include <iostream>
using namespace std;
#include <cstring>

int main()
{
    setlocale(0, "");
    int i = 0, k = 0, c;
    char s[] = {"мололом кака делалед"};
    while (i < strlen(s))
    {

        while (s[k] != ' ' && k < strlen(s))
        {
            k++;
        }
        for (int j = i; j < i + (k - i) / 2; j++)
        {
            if (s[j] == s[k - 1 - j + i])
            {
                c = 1;
            }
            else
            {
                c = 0;
                break;
            }
        }
        if (c == 1)
        {
            for (; i < k; i++)
                cout << s[i];
            cout << " ";
            i++;
            k = i;
        }
        else
        {
            k++;
            i = k;
        }
    }
    return 0;
}
