#include <iostream>
using namespace std;
#include <cstring>

int main()
{
    setlocale(0, "");
    int i = 0, k = 0, count = 0;
    char s[] = {" тотото каек делишки молоко "};
    while (i < strlen(s))
    {
        while (s[k] != ' ' && k < strlen(s))
        {
            if (s[k] == 'о' || s[k] == 'а' || s[k] == 'ё' || s[k] == 'у' || s[k] == 'е' || s[k] == 'ы' || s[k] == 'э' || s[k] == 'я' || s[k] == 'и' || s[k] == 'ю')
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
