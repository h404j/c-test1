#include <stdio.h>
#include <string.h>
char str[200001];
char str1[100001];
char str2[100001];
int main()
{

    while (scanf("%s%s", str, str1) != EOF)
    {
        if (strlen(str) < strlen(str1))
        {
            printf("no\n");
        }
        else
        {
             strcpy(str2, str);
             strcat(str, str2);
            if (strstr(str, str1) != NULL)
                printf("yes\n");
            else
                printf("no\n");
        }
    }
    return 0;
}