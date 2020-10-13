#include <stdio.h>
#include <math.h>

// int hj(int n)
// {
//     int a = n, f = n,g=n,h=n;
//     int b = 0, c=0, d = 0, e = 0;
//     while (a > 0)
//     {
//         a = a / 10;
//         b++;
//     }
//     c = (int)b / 2+1;
//     for (int i = c; i >0; i--)
//     {
//         d = d * 10 + g/ pow(10, i);
//         g = g%(int)pow(10, i);
//     }
//     for (int i = 0; i <c; i++)
//     {
//         e = e * 10 + h % 10;
//         h=h/10;
//     }
//     if (d == e)
//     {
//         return 1;
//     }
//     else
//     {
//         return 0;
//     }
// }
int inverse(int n)
{
    //计算并返回n的逆序数字
    int c, d = 0, b = n;

    for (int i = 0; n > 9; i++)
    {
        c = n % 10;
        d = d * 10 + c;
        n = n / 10;
    }
    d = d * 10 + n;
    return d;
}
int main()
{
    int a;
    int b;
    scanf("%d %d", &a, &b);
    for (int i = a; i <= b; i++)
    {
        
        if (i ==inverse(i))
        {
            printf("%d ", i);
        }
    }
}