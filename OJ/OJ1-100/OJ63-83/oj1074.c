/*

1074: 百钱买百鸡
时间限制: 1 Sec  内存限制: 128 MB
提交: 29334  解决: 12930
[状态] [讨论版] [提交] [命题人:admin] 


题目描述 


百钱买百鸡问题：公鸡五文钱一只，母鸡三文钱一只，小鸡三只一文钱，用100文钱买100只鸡，公鸡、母鸡、小鸡各买多少只？ 
 本程序要求解的问题是：给定一个正整数n，用n文钱买n只鸡，问公鸡、母鸡、小鸡各买多少只？ 



输入 


输入一个正整数n(n<=100)。 



输出 


如果有解，种组合占一行，包含公鸡、母鸡、小鸡的个数，用正整数表示，每个数据占4列。公鸡母鸡小鸡个数均大于等于0，按公鸡数目从小到大输出，公鸡数目相同按母鸡数目从小到大输出，以此类推。如果无解，输出“No Answer”。  



样例输入 Copy 

100



样例输出 Copy 

   0  25  75
   4  18  78
   8  11  81
  12   4  84



来源/分类 

*  

 
[提交] [状态] */
#include <stdio.h>
int main()
{
int n, i, j, k, sum = 0,flag=0;
    scanf("%d", &n);
    for (i = 0; i <= n; i++)//i是公鸡
    {
        for (j = 0; j <= n; j++)//j是母鸡
        {
            for ( k = 0; k<=n; k++)//k是小鸡
                {
                if ((i + j + k) ==n&&k%3==0&&(5*i+3*j+k/3)==n)//公鸡母鸡小鸡的数量和买它们所花费的钱等于n
                {
                    flag = 1;
                    printf("%4d%4d%4d\n", i, j, k);
                }
            }
        }
    }
    if (flag==0)
    {
        printf("No Answer");
    }
  
    
}