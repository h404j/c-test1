/*

1078: a+b（多实例测试1）
时间限制: 1 Sec  内存限制: 128 MB
提交: 16010  解决: 12625
[状态] [讨论版] [提交] [命题人:admin] 


题目描述 


计算A+B 



输入 


输入第1行为一个整数n(1≤n≤10)，代表测试的组数。 
 下面有n组测试数据，每组1行，为2个整数，为A, B。 



输出 


对每行输入，输出A+B的值，单独占一行。 



样例输入 Copy 

2
1 2
3 4




样例输出 Copy 

3
7


提示 


此类多实例测试解决方案： 
scanf("%d",&n); 
 for(i=1;i<=n;i++) 
 { 
 //读入、处理一组测试实例 
} 
*/
#include<stdio.h>
int main(){
    int n,a,b;
    scanf("%d",&n);
    for (int i = 0; i <n; i++)
    {
        scanf("%d%d",&a,&b);
        printf("%d\n",a+b);
    }
    
   
    
}