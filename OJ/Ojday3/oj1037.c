#include <stdio.h>
#include <math.h>

int main()
{
    char c;
    double s1, s2, ans;
    scanf("%lf %c %lf", &s1, &c, &s2);
    if (c == '+')
        printf("%.2lf", s1 + s2);
    else if (c == '-')
        printf("%.2lf", s1 - s2);
    else if (c == '*')
        printf("%.2lf", s1 * s2);
    else if (c == '/')
    {
        if (fabs(s2) < 1e-10)
            puts("Wrong input!");
        else
            printf("%.2lf", s1 / s2);
    }
    else
        puts("Wrong input!");

    return 0;
}
