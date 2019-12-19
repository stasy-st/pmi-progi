#include <iostream>
using namespace std;
#include <cstring>

int main()
{
    setlocale(0, "");
    int i = 0, k = 0, count = 0;
    char s[] = {" тототО как дела молоко "};
    while (i < strlen(s))
    {

        while (s[k] != ' ' && k < strlen(s))
        {
            if (s[k] == 'о' || s[k] == 'О')
                count++;
            k++;
        }
        if (count == 3)
        {
            for (; i < k; i++)
                cout << s[i];
            cout << " ";
        }
        count = 0;
        i++;
        k = i;
    }
    return 0;
}