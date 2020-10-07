#include <stdio.h>
int main()
{
    int m, n;
    double d;
    scanf("%d%d", &m, &n);
   
    
    d=m*n;
    if (m < n)
    {
        int c = m;
        m = n;
        n = c;
    }
    while (m % n != 0)
    {
        int c = m % n;
        m = n;
        n = c;
    }
    printf("%-2d%.0lf", n,d/n);
    return 0;
}
/* #include<stdio.h>
int main()
{
    int n,m,y,a,b;
    scanf("%d%d",&n,&m);
    a=n;
    b=m;
    while(b%a>0)
    {
        y=a%b;
        a=b;
        b=y;
    }
    printf("%d %d",a,m/a*n);
    return 0;
}*/