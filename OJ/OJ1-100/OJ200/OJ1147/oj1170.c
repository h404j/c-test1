#include <stdio.h>
#include <string.h>
#include <stdlib.h>
void maxLenStr(char *str[], int n, int *max)
{
    int i, len, max_len;
    max_len = 0;
    *max = 0;
    for (i = 0; i < n; i++)
    {
        len = strlen(str[i]);
        if (len > max_len)
        {
            max_len = len;
            *max = i;
        }
    }
}
int main()
{ 
    int i, max;
    char *str[100], s[80];
    i = 0;
    while (gets(s), strcmp(s, "****") != 0)
    {
        str[i] = malloc((strlen(s) + 1) * sizeof(char));
        strcpy(str[i], s);
        i++;
    }
    maxLenStr(str, i, &max);
    puts(str[max]);
    return 0;
}
