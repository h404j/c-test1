
#include <stdio.h>
int main()
{
    char ch;
    while (scanf("%c", &ch), ch != '@')
    {
        if (ch >= 'A' && ch <= 'Z')
        {
            ch = ch + 32;
            if (ch >= 'a' && ch <= 'y')
                ch = ch + 1;
            else if (ch == 'z')
                ch = 'a';
            printf("%c", ch);
        }
        else if (ch >= 'a' && ch <= 'y')
        {
            ch = ch + 1;
            printf("%c", ch);
        }
        else if (ch == 'z')
        {
            ch = 'a';
            printf("%c", ch);
        }
        else
            printf("%c", ch);
    }
    return 0;
