#include <stdio.h>
#include <string.h>
int main()
{
    char str[22], i = 0, res[30];
    memset(res, 0, sizeof(char) * 30);
    gets(str);
    i = strlen(str);
    if (str[i - 1] == 'y')
    {
        str[i - 1] = 'i';
        strcpy(res, str);
        strcat(res, "es");
    }
    else if (str[i - 1] == 's' || str[i - 1] == 'x' || (str[i - 1] == 'h' && (str[i - 2] == 'c' || str[i - 2] == 's')))
    {
        strcpy(res, str);
        strcat(res, "es");
    }
    else if (str[i - 1] == 'o')
    {
        strcpy(res, str);
        strcat(res, "es");
    }
    else
    {
        strcpy(res, str);
        strcat(res, "s");
    }
    puts(res);
    return 0;
}
