#include <stdio.h>
int inverse(int n)
{
    //计算并返回n的逆序数字
    int c, d = 0, b = n;

    for (int i = 0; n > 9; i++)
    {
        c = n % 10;
        d = d * 10 + c;
        n = n / 10;
    }
    d = d * 10 + n;
    return d;
}
int main()
{
    int a;
    int b;
    scanf("%d", &a);
    while (b= inverse(a), b!=a)
    {
        printf("%d ",a);
        a=a+b;
    }
    printf("%d", a);
    // for (int i = a; i <= b; i++)
    // {
    //     if (i == inverse(i))
    //     {
    //         printf("%d ", i);
    //     }
    // }
}