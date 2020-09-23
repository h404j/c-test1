#include <stdio.h>
int main()
{
    int n,a, b,max=0;
    scanf("%d", &n);
    for (a = 1; a <=n; a++)
    {
        scanf("%d",&b);
        if (b>max)
        {
            max=b;
        }
        
    }
    
    printf("%d",max);
    return 0;
}