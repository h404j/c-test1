#include <stdio.h>

int main()
{
    char str[1000], max, str1[1000], str2[] = {"(max)"};
    gets(str);
    int i, k = 0;
    max = str[0];
    for (i = 0; str[i] != '\0'; i++)
    {
        if (str[i] > max)
        {
            max = str[i];
        }
    }
    for (i = 0; str[i] != '\0'; i++)
    {
        str1[k] = str[i];
        if (str[i] == max)
        {
            for (int j = 0; str2[j] != '\0'; j++)
            {
                k++;
                str1[k] = str2[j];
            }
        }
        k++;
    }
    printf("%s\n", str1);
}
/*
#include<stdio.h>
#include<string.h>
int main()
{
    char ch[201],max;
    int i,j,k,l,n;
    gets(ch);
    n=strlen(ch);
    max=ch[0];
    for(i=0;i<n;i++)
    {
        if(ch[i]>max)
            max=ch[i];
    }
    for(i=0;i<n;i++)
    {
        printf("%c",ch[i]);
        if(ch[i]==max)
        {
            printf("(max)");
        }
    }
    return 0;
}
*/