#include <stdio.h>
int main()
{
    int a[200] = {0}, t, i, max;
    char ch;
    while (scanf("%c", &ch) && ch != '\n')
    {
        if (ch >= 'A' && ch <= 'Z')
            ch = ch + 32;
        t = ch;
        a[t]++;
    }
    max = a[97];
    for (i = 98; i <= 122; i++)
    {
        if (a[i] > max)
            max = a[i];
    }
    for (i = 96; i <= 122; i++)
    {
        if (max == a[i])
        {
            printf("%c", i);
            break;
        }
    }
    return 0;
}