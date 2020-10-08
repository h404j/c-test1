/*

1073: 级数求和
时间限制: 1 Sec  内存限制: 128 MB
提交: 16210  解决: 9101
[状态] [讨论版] [提交] [命题人:admin] 


题目描述 


已知：Sn= 1＋1／2＋1／3＋…＋1／n。显然对于任意一个整数K，当n足够大的时候，Sn大于K。
 现给出一个整数K（1<=k<=15），要求计算出一个最小的n；使得Sn＞K。 



输入 


键盘输入 k 



输出 


屏幕输出 n 



样例输入 Copy 

1



样例输出 Copy 

2



来源/分类 

***  

 
[提交] [状态]*/
#include<stdio.h>
int main(){
    int k,i,n=0;
    double sn=0;
    scanf("%d",&k);
    for ( i =1;sn<=k ; i++)//注意sn<=k,而不是sn<k
    {
        double a=(double)i;//把i转换成double类型
        double b=1/a;
        sn=sn+b;
        n++;
    }
    printf("%d",n);

}
/*#include<stdio.h>
int main()
{
   int k,n=0,i=1;
   double a,b,c,d,sn=0;
   scanf("%d",&k);
   while(sn<=k)
   {
    a=(double)i;
    b=1/a;
    sn+=b;
    i++;
    n++;
   }
   printf("%d",n);
   return 0;
}
*/