#include<stdio.h>
int FacSum(int n) ;
int main()
{
    int a;
    while (1)
    {
        scanf("%d", &a);
        printf("%d", FacSum(a));
    }
    
    
}
int FacSum(int n)
{
    int sum=0;
    //计算n的所有正因子(包括1，不包括自身)之和sum，本函数返回sum
    for (int i =1; i <n; i++)
    {
        if (n%i==0)
        {
            sum=sum+i;
        }
        
    }
    return sum;
}