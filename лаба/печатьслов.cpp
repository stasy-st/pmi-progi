#include <iostream>
using namespace std;
#include <cstring>

int main()
{
    setlocale(0, "");
    int i = 0, k = 0, c;
    char s[] = {"мололом как делал"};
    while (i < strlen(s))
    {

        while (s[k] != ' ' && k < strlen(s))
        {
            k++;
        }
        c = k - i;
        for (int t = 0; t < c; t++)
        {
            for (; i < k; i++)
                cout << s[i];
            cout << " ";
            i = i - c;
        }
        cout << endl;
        k++;
        i = k;
    }
    return 0;
}
