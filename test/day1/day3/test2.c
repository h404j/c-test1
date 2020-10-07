#include <stdio.h>

int main()
{
    printf("请输入三个需要排序的整数：\n");
    int a = 0;
    int b = 0;
    int c = 0;
    scanf("%d%d%d", &a, &b, &c);
   
    if (a > b)
    {
        int temp;
        temp = a;
        a = b;
        b = temp;
    }
    if (b > c)
    {

        int te = b;
        b = c;
        c = te;
        if (a > b)
        {
            int temp2 = a;
            a = b;
            b = temp2;
        }
    }
    printf("%d,%d,%d\n", a, b, c);
}