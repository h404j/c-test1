#include <stdio.h>
int main()
{
    int n,a, b,c=0;
    scanf("%d", &n);
    for (a = 1; a <=n; a++)
    {
        scanf("%d",&b);
        if (b>c)
        {
            c=b;
        }
        
    }
    
    printf("%d",c);
    return 0;
}