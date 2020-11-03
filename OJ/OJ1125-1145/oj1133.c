#include <stdio.h>

int main()
{
    char str[1000];
    int count = 0;
    gets(str);
    int i;
    for  (i = 1; str[i] != '\0'; i++)
    {
        if ((str[i] == ' ' && str[i+1] != ' '))
        {
            count++;
        }
    }
    if (str[i-1]!=' ')
    {
        count++;
    }
    
    printf("%d\n", count);
}
