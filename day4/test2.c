#include <stdio.h>
//输入两个正整数m和n，求其最大公约数和最小公倍数。
int main()
{
    int a, b, c, d;
    scanf("%d%d", &a, &b);
    d = a * b;
    if (a<b)
    {
        c = a;
        a = b;
        b = c;
    }
    
    while (a % b != 0)
    {
        /* code */
        c = a % b;
        a = b;
        b = c;
    }
    printf("最大公约数%d最小公倍数%d", b, d / b);
}