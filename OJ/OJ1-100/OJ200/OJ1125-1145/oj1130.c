#include <stdio.h>
int main()
{
    int a[31][31] = {0}, c;
    
    scanf("%d", &c);
    a[1][1]=1;
    printf("%d\n", a[1][1]);
    for (int i =2; i <=c; i++)
    {
        for (int j =1; j <=i; j++)
        {
           
            int x = a[i - 1][j - 1] + a[i-1][j];
            a[i][j]=x;
             printf("%d ", a[i][j]);
        }
        printf("\n");
    }
    
}