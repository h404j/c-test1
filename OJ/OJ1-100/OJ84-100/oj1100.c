/*

1100: 求组合数（函数专题）
时间限制: 1 Sec  内存限制: 128 MB
提交: 12620  解决: 8450
[状态] [讨论版] [提交] [命题人:admin] 
题目描述 
马上要举办新生程序设计竞赛了，与以往不同的是，本次比赛以班为单位，为了全面衡量一个班级的整体水平，要求从一个班的m位同学中任选k位同学代表本班参加比赛，问有多少种组合方案。显然，这个组合数是m!/(k!(m-k)!)。要求编写函数fact()，实现求一个数的阶乘功能，在主函数中调用此函数。 
int fact(int n) 
 { 
    //函数返回值为n的阶乘。 
}    
对于C/C++代码的提交，本题要求必须通过定义fact函数和main函数实现，否则，提交编译错误，要提交完整的程序。 
输入 
输入两个正整数m,k，k<=m<=12。 
输出 
输出一个整数，即组合方案数。 
样例输入 Copy 
5 3
样例输出 Copy 
10
*/
#include<stdio.h>
int fact(int n)
{
    double a=1;
    //函数返回值为n的阶乘。
    for (int i = 1; i <=n; i++)
    {   /* code */
        a=a*i;

    }
    return a;
    
}
int main(){
int m,k;
double sum1,sum2,sum3,sum;
scanf("%d%d",&m,&k);
sum1 = fact(m);
sum2 = fact(k);
sum3 =fact(m - k);
sum=sum1/(sum2*sum3);          
printf("%.0f",sum);
}