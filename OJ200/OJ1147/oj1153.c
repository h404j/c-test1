#include <stdio.h>
void sort(int a[], int n) //简单选择排序
{
    int i, j, k, temp;
    for (i = 0; i < n; i++)
    {
        k = i;
        for (j = i + 1; j < n; j++)
        {
            if (a[k] > a[j])
                k = j;
        }
        temp = a[i];
        a[i] = a[k];
        a[k] = temp;
    }
}

int main()
{
    void sort(int a[], int n);
    int a[10000], max[10] = {0}; //用max数组记录每组数据中最多的数的长度
    int t, n, i, j, count;
    scanf("%d", &t);
    for (i = 0; i < t; i++)
    {
        scanf("%d", &n);
        for (j = 0; j < n; j++)
        {
            scanf("%d", &a[j]);
        }
        sort(a, n);
        count = 1; //对于每组数据count初始化
        for (j = 0; j < n; j++)
        {
            if (a[j] == a[j + 1]) //计数
                count++;
            else
                count = 1;      //对于每次遇到一组中不同的数据时，初始化
            if (max[i] < count) //把出现的最多次数存入max数组
                max[i] = count;
        }
    }
    for (i = 0; i < t; i++)
        printf("%d\n", max[i]);
    return 0;
}
