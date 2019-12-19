#include <string>
#include <iostream>
using namespace std;

string sorting(string str)
{
    int k = 0;
    //считаем пробелы
    for (int i = 0; i < str.length(); i++)
        if (str[i] == ' ')
            k++;
    string words[k + 1];
    k = 0;
    int word_begin = 0, word_end = 0;
    //заполняем массив строк
    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] == ' ' || i == str.length() - 1)
        {
            word_end = i;
            for (int j = word_begin; j < word_end; j++)
                words[k] += str[j];
            k++;
            word_begin = word_end + 1;
        }
    }
    // сортируем массив строк
    string t = "";
    for (int i = 0; i < k; i++)
        for (int j = i; j < k; j++)
            if (words[i] > words[j])
            {
                t = words[i];
                words[i] = words[j];
                words[j] = t;
            }
    str = "";
    //вставляем отсортированный вариант в исходную строку(теперь можно из маина просто считать строку, вызвать функцию и вывести строку, уже отсортированную)
    for (int i = 0; i < k; i++)
        str += words[i] + " ";
    return str;
}

int main()
{
    string str = "asdf zvbsdfs vdgSwer jsfwrw vdfs bsfdfwe";
    str = sorting(str);
    cout << str;
}