#include <stdio.h>
int main()
{
    //从键盘输入两个整数x,y，按从小到大的顺序输出它们的值。
    int x, y;
    scanf("%d%d", &x, &y);
    if (y <=x)
    {
        printf("%d %d", y, x);
    }
    else
    {
        printf("%d %d", x, y);
    }

    return 0;
}