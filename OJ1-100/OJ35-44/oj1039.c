#include <stdio.h>
int main()
{
    int n, array[1000], a, b, sum = 0;
    scanf("%d", &n);
    for (a = 0; a < n; a++)
    {
        scanf("%d", &array[a]);
    }
    for (b = 0; b < n; b++)
    {
        sum = sum + array[b];
    }
    printf("%d", sum);
    return 0;
}