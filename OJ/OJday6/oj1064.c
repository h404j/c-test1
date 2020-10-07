#include <stdio.h>
int main()
{
    char str[100];
    char str1[100];

    scanf("%99s", &str);
    for (int i = 0; str[i] != '@'; i++)
    {
        if (str[i] >= 65 && str[i] <= 90)
        {
            char a = str[i] + 32;
            str[i] = a;
        }
        if (str[i] == 122)
        {
            str1[i] = 'a';
        }
        else if (str[i] > 96 && str[i] < 122)
        {
            char a = str[i] + 1;
            str1[i] = a;
        }
        else
        {
            str1[i] = str[i];
        }
    }
    printf("%s", str1);
}