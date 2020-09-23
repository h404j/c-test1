#include <stdio.h>
int main()
{
    int n, a = 1, d;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &d);
        if (d%2!=0)
        {
            a=a*d;
        }
        
    }
    printf("%d",a);
    return 0;
}