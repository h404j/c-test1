#include <stdio.h>

int main()
{
    int a = 0, n;
    double sum = 0, fac = 1;
    scanf("%ld", &n);
    for (int i = 1;; i++)
    {
        fac = fac * i;
        sum = sum + fac;
        if (sum >=n)
        {
            printf("m<=%d\n", i - 1);
            break;
        }
    }
}