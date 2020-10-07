#include <stdio.h>
// void haha(int a)
// { //倒序输出
//     while (a > 10)
//     {
//         printf("%-2d", a % 10);
//         a = a / 10;
//     }
//     printf("%d", a);
// }
// int daoxu(int a)
// {//倒序
//     int b = 0, c;
//     while (a >=10)
//     {
//         b = b * 10 + a % 10;
//         a = a / 10;
//     }
//     b = b * 10 + a;
//     return b;
// }
// int shuc(int a){
// for (int i = 1; a>=10; i++)
// {
    
// }


// }
// int main()
// {
//     int a;
//     scanf("%d", &a);
//     // printf("%d", daoxu(a));
//     haha(daoxu(a));
// }
#include <stdio.h>

int main()
{
    int n, s, a;
    scanf("%d", &n);
    s = n;
    a = 1;
    while (s > 9)
    {
        s /= 10;
        a *= 10;
    }
    while (a > 0)
    {
        printf("%d ", n / a);
        n %= a;
        a /= 10;
    }
    printf("\n");
    return 0;
}
