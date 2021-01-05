#include <stdio.h>
#include <string.h>
int cmp(char *a, char *b)
{
    if (strlen(a) > strlen(b))
    {
        return 1;
    }
    else if (strlen(a) < strlen(b))
    {
        return -1;
    }
    if (strcmp(a, b) < 0)
        return -1; //a<b
    else if (strcmp(a, b) > 0)
        return 1; //a>B
    else if (strcmp(a, b) == 0)
        return 0; //a>B
}
int main()
{
    char a[101], b[101], c[101], max[101];
    scanf("%s", a);
    scanf("%s", b);
    scanf("%s", c);
    if (cmp(a, b) ==1)
    {
        strcpy(max, a);
        strcpy(a, b);
        strcpy(b, max);
    }
    if (cmp(a, c) ==1)
    {
        strcpy(max, a);
        strcpy(a, c);
        strcpy(c, max);
    }
    if (cmp(b, c) ==1)
    {
        strcpy(max, b);
        strcpy(b, c);
        strcpy(c, max);
    }
    /*#include <stdio.h>
#include <string.h>
int bj(char *a, char *b)
{
    if (strlen(a) > strlen(b))
    {
        return 1;
    }
    else if (strlen(a) < strlen(b))
    {
        return -1;
    }
    if (strcmp(a, b) < 0)
        return -1; //a<b
    else if (strcmp(a, b) > 0)
        return 1; //a>B
    else if (strcmp(a, b) == 0)
        return 0; //a>B
}
int main()
{
    char a[110], b[110], c[110], max[110];
    scanf("%s%s%s", a, b, c);
    if (bj(a, b) == 1)
        strcpy(max, a), strcpy(a, b), strcpy(b, max);
    if (bj(a, c) == 1)
        strcpy(max, a), strcpy(a, c), strcpy(c, max);
    if (bj(b, c) == 1)
        strcpy(max, b), strcpy(b, c), strcpy(c, max);
    printf("%s\n%s\n%s\n", a, b, c);
    return 0;
}*/
    printf("%s\n%s\n%s\n", a, b, c);
    return 0;
}