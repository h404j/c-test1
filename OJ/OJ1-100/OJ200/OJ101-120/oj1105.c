#include <stdio.h>
int facsum(int n);
int main()
{
    int m, n;
    scanf("%d%d", &m, &n);
    int f=1;
    for (int i = m; i < n; i++)
    {
        int t = facsum(i);
        if (i == facsum(t) && t <= n && t > i)
        {
            printf("%d %d\n", i, t);
            f=0;
        }
    }
    if (f)
    {
        printf("No answer");
    }
    
}
int facsum(int n)
{
    int sum = 0;
    //计算n的所有正因子(包括1，不包括自身)之和sum，本函数返回sum
    for (int i = 1; i < n; i++)
    {
        if (n % i == 0)
        {
            sum = sum + i;
        }
    }

    return sum;
}