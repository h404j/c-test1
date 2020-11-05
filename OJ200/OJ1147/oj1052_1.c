#include <stdio.h>
int erfen(int a[], int x, int l, int h)
{
    int m;
    if (l > h) //大于最大值 直接not found
        return -2;
    else
    {
        m = (l + h) / 2; //二分搜索
        if (x == a[m])
            return m;      //返回 序号
        else if (x < a[m]) //调用本身，递归
            return erfen(a, x, l, m - 1);
        else
            return erfen(a, x, m + 1, h);
    }
}
int main()
{
    int x, p, i, t, n, a[100000];
    scanf("%d", &t);
    for (i = 0; i < t; i++)
        scanf("%d", &a[i]);
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        scanf("%d", &x);
        p = erfen(a, x, 0, t - 1);
        if (p == -2)
            printf("Not found!\n");
        else
            printf("%d\n", p);
    }
    return 0;
}
