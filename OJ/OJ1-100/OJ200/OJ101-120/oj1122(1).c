#include <stdio.h>
int main()
{
    int n, m, i, j, a[1001], t;
    scanf("%d", &n);
    m = n;
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]); //存入数组
    }
    for (i = 0; i < n - 1; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (a[i] > a[j]) //数组排序
            {
                t = a[i];
                a[i] = a[j];
                a[j] = t;
            }
        }
    }
    for (i = 0; i < n; i++)
    {
        if (a[i] == a[i + 1]) //如果有相等零值等于零
        {
            a[i] = 0;
            m = m - 1; //不为零的总数
        }
    }
    printf("%d\n", m);
    for (i = 0; i < n; i++)
    {
        if (a[i] == 0) //为零不输出
            continue;
        else
            printf("%d ", a[i]);
    }
    getchar(); //吸收最后一个空格
    return 0;
}