#include <stdio.h>
int isou(int a[][110], int n)
{
    for (int i = 0; i < n; i++)
    {
        int sum = 0;
        for (int j = 0; j < n; j++)
        {
            if (a[i][j] == 1)
            {
                /* code */
                sum += a[i][j];
            }
        }
        if (sum % 2 != 0)
        {
            return 0;
        }
    }
    for (int i = 0; i < n; i++)
    {
        int sum = 0;
        for (int j = 0; j < n; j++)
        {
            if (a[j][i] == 1)
            {
                /* code */
                sum += a[j][i];
            }
        }
        if (sum % 2 != 0)
        {
            return 0;
        }
    }
    return 1;
}
int change(int a[][110],int n){
    int i, j, sum, x, y, t = 0, b = 0;
    for (i = 0; i < n; i++)
    {
        sum = 0;
        for (j = 0; j < n; j++)
            sum += a[i][j];
        if (sum % 2 != 0)
        {
            x = i;
            t++;
        }
    }
    for (j = 0; j < n; j++)
    {
        sum = 0;
        for (i = 0; i < n; i++)
            sum += a[i][j];
        if (sum % 2 != 0)
        {
            y = j;
            b++;
        }
    }
    if (b == 1 && t == 1)
        printf("Change bit(%d,%d)", x, y);
    else
        printf("Corrupt");
}
int main()
{
    int a[110][110], n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    if (isou(a, n) == 1)
    {
        printf("OK");
    }else
    {
        change(a,n);
    }
    
}