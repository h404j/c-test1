#include <stdio.h>
int main()
{
    double a, b, s = 0;
    while (scanf("%*s%lf %lf", &a, &b) != EOF)
    {
        s += a * b;
    }
    printf("%.1f", s);
    return 0;
}
