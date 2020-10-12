#include <stdio.h>
//从键盘输入一个任意的三位正整数，分别求出其个位、十位和百位上的数字。
int main()
{
    int a = 0, b = 0, c = 0, d = 0;
    scanf("%d", &a);
    b = a / 100;
    a = a % 100;
    c = a / 10;
    d = a % 10;
    printf("%d %d %d",d,c,b);
}