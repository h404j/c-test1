#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define N 105
//将字符串p表示的实数的自小数点开始的小数部分存入一个字符串，并由函数返回，
//若p为“123.456”，则返回的字符串为“.456”。若小数部分为0,返回空指针NULL。
char *decimal(char *p);
int main()
{
    char *p;
    p = (char *)malloc(sizeof(char) * N);
    gets(p);
    if (decimal(p) == NULL)
        printf("No decimal part\n");
    else
        printf("0%s\n", decimal(p));
    return 0;
}
char *decimal(char *p)
{
    char *point;
    point = (char *)malloc(sizeof(char) * N);
    int i = 0, j = 0;
    for (i = 0; i < strlen(p); i++)
    {
        if (p[i] == '.')
            break;
    }
    while (i < strlen(p))
    {
        point[j++] = p[i++];
    }
    point[j] = '\0';
    j--;
    while (point[j] == '0')
    {
        point[j] = '\0';
        j--;
    }
    if (point[j] == '.')
    {
        return NULL;
    }
    return point;
}