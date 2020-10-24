#include <stdio.h>

int main()
{
    char str[1000];
    int count = 0;
    gets(str);
    int i;
    if ((str[0] >= 'a' && str[0] <= 'z'))
    {
        
            str[0] = str[0] - 32;
        
    }
    for (i = 0; str[i] != '\0'; i++)
    {
        if ((str[i] == ' ' && (str[i+1] >= 'a' && str[i] <= 'z')))
        {
                str[i+1]=str[i+1]-32;
        }
    }

    printf("%s\n", str);
}
