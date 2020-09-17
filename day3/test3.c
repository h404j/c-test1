#include <stdio.h>

int main()
{
    for (int i = 9; i > 0; i--) //倒九九乘法表
    {
        for (int j = 1; j <= i; j++)
        {
            printf("%d*%d=%d\t", i, j, j * i);
        }
        printf("\n");
    }
    for (int i = 1; i < 10; i++) //正九九乘法表
    {
        for (int j = 1; j <= i; j++)
        {
            printf("%d*%d=%d\t", i, j, j * i);
        }
        printf("\n");
    }
}