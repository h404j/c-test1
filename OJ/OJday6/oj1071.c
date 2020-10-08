/*

1071: 分解质因子
时间限制: 1 Sec  内存限制: 128 MB
提交: 17535  解决: 11387
[状态] [讨论版] [提交] [命题人:admin] 


题目描述 


将一个正整数分解质因数，例如，输入90，输出2 3 3 5。 



输入 


输入一个正整数n（2<=n<=2000）。 



输出 


从小到大输出n的所有质因子，每两个数之间空一格。 



样例输入 Copy 

20



样例输出 Copy 

2 2 5



提示 


注意，最后一个数后面没有空格！！ 
*/
#include<stdio.h>
#include<math.h>
int main(){
    int nu,i;
    scanf("%d",&nu);
  
       for (i = 2; i <nu + 1; i++)
       {
           
           if (nu==i)
           {
               printf("%d", i);
               break;
           }
           
           if (nu % i == 0)
           {
               printf("%d ", i);
               nu = nu / i;
               i =1;
               
           }
       }
   
   
    
}