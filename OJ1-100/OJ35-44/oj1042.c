#include <stdio.h>
#include <math.h>
int main()
{
    int n;
    float sum = 0;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        sum = sum + (float)i / (2 * i - 1) * pow(-1, i + 1);
    }
    printf("%.3f", sum);
    return 0;
}