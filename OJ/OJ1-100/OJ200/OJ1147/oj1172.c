#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    int m, n;
    int ret = 0;

    int *buf;
    scanf("%d%d", &m, &n);
    buf = (int *)malloc(m * n * sizeof(int)); //��ʱ���ڴ��С�� m*n ,�൱�ڰѶ�ά����չ��
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &buf[i * n + j]); //n���д�С������ƫ�������ҵ�ÿһ��Ԫ��
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
    free(buf); //ֻ��Ҫ�ͷ�һ��һ��ָ��
}