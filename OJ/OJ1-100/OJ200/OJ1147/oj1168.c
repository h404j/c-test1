#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define N 105
double Price(int n);
int main()
{
    double sum = 0;
    int n, t;

    scanf("%d", &n);

    while (n--)
    {
        scanf("%d", &t);
        getchar(); //消掉回车
        sum = Price(t);
        printf("%.1f\n", sum);
    }
    return 0;
}
double Price(int n)
{
    char *p;
    double sum = 0.0;
    double f;
    p = (char *)malloc(sizeof(char) * N);
    while (n--)
    {
        gets(p);
        p = strrchr(p, ' '); //找一个字符c在另一个字符串str中末次出现的位置
                             //（也就是从str的右侧开始查找字符c首次出现的位置），
                             //并返回这个位置的地址。如果未能找到指定字符，那么函数将返回NULL。
        sscanf(p, "%lf", &f);
        sum += f;
    }
    return sum;
}