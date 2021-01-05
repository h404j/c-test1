#include <stdio.h>
int main()
{
    char a, b, c;
    char max;
    char min;
    printf("请输入三个字符：");
    scanf("%c %c %c", &a, &b, &c);
    if (a > b)
    {
        max = a;
        min = b;
    }
    else
    {
        max = b;
        min = a;
    }
    if (max < c)
    {
        max = c;
    }
    if (min > c)
    {
        min = c;
    }
    
    printf("%c", max);
}
