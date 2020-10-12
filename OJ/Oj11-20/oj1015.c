#include <stdio.h>

int main()
{
    int a, b, c;
    int x, y, z;
    int sum1 = 0, sum2 = 0;

    scanf("%d:%d:%d", &a, &b, &c);
    scanf("%d:%d:%d", &x, &y, &z); 

    sum1 = c + b * 60 + a * 3600;
    sum2 = z + y * 60 + x * 3600;

    printf("%d\n", sum2 - sum1);
    return 0;
}