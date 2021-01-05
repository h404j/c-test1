#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    char p[1001][32];
    char c, d, str[30000];
    int  j = 0, k = 0;

    while (gets(str),str!= '#')
    {for (int i = 0; i <strlrn(str); i++)
    {
       
        if (str[i] == ' ' && i > 0 && str[i - 1] != ' ')
        {
            i++;
            j++;
            continue;
        }
        if (str[i]='#')
        {
           break;
        }
        
        p[j][k] = str[i];
        k++;
        i++;
    }
    
    }

    printf("%d", j);
}