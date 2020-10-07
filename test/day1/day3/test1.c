#include<stdio.h>
// 题目：有1、2、3、4个数字，能组成多少个互不相同且无重复数字的三位数？都是多少？
int main(){
    int i,j,k;
    int a=0;
    for ( i =1 ; i < 5; i++)
    {
        for (j = 1; j < 5; j++)
        {
            for ( k = 1; k < 5; k++)
            {
            if (i!=j&&i!=k&&j!=k)
            {
                printf("%d%d%d\n",i,j,k);
                a++;
            }
            
            }
            
        }
        
    }
    printf("一共能组成%d\n个三位数",a);
}