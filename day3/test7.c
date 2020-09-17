#include <stdio.h>
//将一个正整数分解质因数。例如：输入90,打印出90=2*3*3*5。
void fenjie(int a)//自己的答案
{
    int b = a;
    int i = 2;
    int c=0;
    printf("%d=",a);
    while (i <=b)
    {
        if (b % i == 0)
        {
            b = b / i;
            if(c==0){
                printf("%d", i);
            }else
            {
                printf("*%d", i);
            }
            
           
           i=i-1;
           c=1;
        }
        i++;
    }
}
void fenjie2() //题解
{
    int n, i;
    printf("请输入整数：");
    scanf("%d", &n);
    printf("%d=", n);
    for (i = 2; i <= n; i++)
    {
        while (n % i == 0)
        {
            printf("%d", i);
            n /= i;
            if (n != 1)
                printf("*");
        }
    }

    printf("\n");
    
}
int main()
{
    fenjie(90);
}