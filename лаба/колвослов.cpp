#include <iostream>
using namespace std;
int main()
{
    char s[80] = "првп     аврваи вывыпар ";
    int slovo, count = 0;
    //  system("chcp 1251");
    setlocale(LC_ALL, "Russian");
    //  system("cls");
    int i = 0;
    slovo = 0;
    while (s[i] != '\0')
    {
        if (s[i] != ' ' && slovo == 0)
        {
            slovo = 1;
            count++;
        }
        else if (s[i] == ' ')
            slovo = 0;
        i++;
    }
    cout << " оличество слов в строке " << count;
    return 0;
}