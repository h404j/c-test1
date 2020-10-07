#include <stdio.h>
int main()
{
    int n, a, b, max = 0;
    float c;
    scanf("%d", &n);
    for (a = 0; a < n; a++)
    {
        scanf("%d", &b);
        if (b < 60)
        {
            max++;
        }
    }
    c = (float)max / n;
    printf("%.2f", c);
    return 0;
}