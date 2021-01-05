#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    int m, n;
    int ret = 0;

    int *buf;
    scanf("%d%d", &m, &n);
    buf = (int *)malloc(m * n * sizeof(int)); //此时的内存大小是 m*n ,相当于把二维数组展开
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &buf[i * n + j]); //n是列大小，利用偏移量来找到每一个元素
        }
    }

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == 0 || j == 0 || i == m - 1 || j == n - 1)
            {
                ret += buf[i * n + j];
            }
        }
    }
    printf("%d\n", ret);
    free(buf); //只需要释放一个一级指针
}