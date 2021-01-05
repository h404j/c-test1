#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
    void find(char *name[], int n, int *p);
    char *name[100], str[5];
    int i, max;
    for (i = 0;; i++)
    {
        gets(str);
        if (strcmp(str, "*****") == 0)
            break;
        else
        {
            name[i] = (char *)malloc(sizeof(char) * (strlen(str)));
            strcpy(name[i], str);
        }
    }
    find(name, i, &max);
    printf("%s\n", name[max]);
    return 0;
}
void find(char *name[], int n, int *p)
{
    int i, m = 0;
    *p = 0;
    for (i = 0; i < n; i++)
    {
        if (strcmp(name[*p], name[i]) < 0)
            *p = i; //*pÖ¸Ïò 22ÐÐ&max£¬¼´max=i
    }
}
