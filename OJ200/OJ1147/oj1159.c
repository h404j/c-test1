#include <stdio.h>
void LargestTow(int a[1000], int n, int *pfirst, int *psecond)
{
    /*数组a有n个元素，将数组中的最大值存入形参指针pfirst所指内存单元，将数组中第二大的值存入形参指针psecond所指内存单元。 */
    for (int i = 0; i < n - 1; i++)
    {
        int flag = 0;
        for (int j = 0; j < n - 1; j++)
        {
            /* code */
            if (a[j] < a[j + 1])
            {
                int te = a[j];
                a[j] = a[j + 1];
                a[j + 1] = te;
                flag++;
            }
        }

        if (flag == 0)
        {
            break;
        }
    }
    *pfirst = a[0];
    *psecond = a[1];
}
int main()
{
    int n, a[1000] = {0}, b, pfirst, psecond;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    LargestTow(a, n, &pfirst, &psecond);
    printf("%d %d", pfirst, psecond);
}