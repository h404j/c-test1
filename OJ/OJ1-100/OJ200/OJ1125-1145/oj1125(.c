#include <stdio.h>
int IsUpperTriMatrix(int a[][11], int n) //函数原型中的N换成具体数据，要求1<=n<=10，所以N=11
{
    int i, j, flag = 0;
    /*判断当j<i时，二维数组中对应的数是否为0*/
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < i; j++)
        {
            if (a[i][j] != 0)
                flag = 1;
        }
    }
    if (flag == 0) //flag==0即为对角线以下均为0
        return 1;
    else
        return 0;
}
int main()
{
    int n, i, j, a[11][11];
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    /*调用函数判断是否是上三角矩阵*/
    IsUpperTriMatrix(a, n);
    if (IsUpperTriMatrix(a, n) == 1)
        printf("YES\n");
    if (IsUpperTriMatrix(a, n) == 0)
        printf("NO\n");
    return 0;
}