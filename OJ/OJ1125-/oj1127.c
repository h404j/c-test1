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
    return 1;
}
int change(int a[][110],int n){
    int i,j;
    for ( i = 0; i < n; i++)
    {
        int sum = 0;
        for ( j = 0; j < n; j++)
        {
            if (a[i][j] == 1)
            {
                /* code */
                sum += a[i][j];
            }
        }
        if (sum % 2!= 0)
        {
            if (a[0][0==1])
            {
                a[0][0]=0;
            }else
            {
                a[0][0]=1;
            }
            if (isou(a,n)==1)
            {
                printf("Change bit(%d,%d)",i,j-1);
            }else
            {
                printf("Corrupt");
            }
            
            break;  
        }
    }
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