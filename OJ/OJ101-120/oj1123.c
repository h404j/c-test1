#include <stdio.h>
int main()
{
    int n, i, a[100] = {0}, t = 0, max;
    while (scanf("%d", &n) && n >= 0)
    {
        a[n]++; //数组对应的值加1
    }
    max = a[0];
    for (i = 1; i < 100; i++)
    {
        if (a[i] >= max)
            max = a[i];
    }
    for (i = 0; i < 100; i++)
    {
        if (a[i] == max)
            printf("%d ", i);
    }
    return 0;
}