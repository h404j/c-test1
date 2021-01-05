#include <stdio.h>
#include <stdlib.h>
void ringShift(int *a, int n, int k); //循环移动后的数值仍然存入数组a中
int main()
{

    int i, n, k;
    scanf("%d", &n);
    int *p = malloc(n * sizeof(int));

    for (i = 0; i < n; i++)
        scanf("%d", &p[i]);
    scanf("%d", &k);
    ringShift(p, n, k);
    return 0;
}
void ringShift(int *p, int n, int k)
{
    int i;
    int a = 0;
    int *q = (int *)malloc(n * sizeof(int));
    for (i = 0; i < k; i++)
        *(q + i) = *(p + n - i - 1); //后面所要移动的数字提出来
    for (i = 0; i < n - k; i++)
        *(p + n - 1 - i) = *(p + n - k - i - 1); //前面的数字后移
    for (i = k - 1; i >= 0; i--)
    {
        *(p + i) = *(q + a); //后面的数字提到前面
        a++;
    }
    for (i = 0; i < n; i++)
    {
        if (i == 0)
            printf("%d", *(p + i));
        else
            printf(" %d", *(p + i));
    }
    printf("\n");
}