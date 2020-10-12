#include <stdio.h>
int main()
{
    int a, b, c, max;
    scanf("%d%d%d", &a, &b, &c);
    if (a <= b)
    {
        max = a;
        a = b;
        b = max;
    }
    if (a <= c)
    {
        max = a;
        a = c;
        c = max;
    }
    if (b <= c)
    {
        max = b;
        b = c;
        c = max;
    }
    printf("%d %d %d", a, b, c);
    return 0;
}