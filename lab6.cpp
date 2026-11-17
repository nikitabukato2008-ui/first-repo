#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <clocale>
using namespace std;
int main()
{
    system("chcp 65001 > nul");
    char str[100];
    puts("Введите строку из нулей и единиц:");
    gets_s(str, _countof(str));

    int i = 0, k = 0;
    while (str[i] != '\0')
    {
        int j = i;
        while (str[j] == str[i]) j++;
        if (str[i] != '0' || j - i != 3)
            for (int p = i; p < j; p++) str[k++] = str[p];
        i = j;
    }
    str[k] = '\0';
    puts("Результат:");
    puts(str);
    return 0;
}