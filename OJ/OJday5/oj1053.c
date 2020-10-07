#include <stdio.h>
#include <math.h>
int main()
{
    double x;
    scanf("%lf",&x);
    double a = 0;
    for (int i = 1; i <=10; i++)
    {
       double y=1.0;
        for (int j = 1; j <= 2*i-1; j++)
        {
            y = y * j;
        }
        a = a +pow(x,2*i-1)/ y * pow(-1, i + 1);
    }
    printf("%.3lf", a);
}
// #include <stdio.h>

// int main()
// {
//     int i;
//     double x, flag, sum, deno, numerator;

//     scanf("%lf", &x);

//     sum = 0.0;
//     deno = 1.0;
//     numerator = x;
//     flag = 1.0;
//     for (i = 1; i <= 10; i++)
//     {
//         sum += numerator * flag / deno;
//         flag = -flag;
//         numerator = numerator * x * x;
//         deno = deno * (2 * i) * (2 * i + 1);
//     }

//     printf("%.3f\n", sum);
//     return 0;
// }