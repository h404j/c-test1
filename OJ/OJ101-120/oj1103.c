#include<stdio.h>
int F(int n)
{
    int a;
    if(n>=60)
    a=(n-50)/10;
    else a=0;
return a;
}
int main()
{
    int n,x,y;
    double c=0,sum=0;
    scanf("%d",&n);
    while(n--)
    {
        scanf("%d%d",&x,&y);
        sum+=x*F(y);
        c+=x;
    }
    printf("%.1f",sum/c);
    return 0;
} 