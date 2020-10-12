#include<stdio.h>
int main(){
    int n,sum=1;//sum为第N天剩下的最后一颗桃子
    scanf("%d",&n);
    for (int i = 1; i < n; i++)//因为第n天并没有吃桃子，所以循环n-1次
    {
        sum=(sum+1)*2;
    }
    printf("%d",sum);
}