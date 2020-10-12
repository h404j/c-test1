/*

1079: a+b（多实例测试2）
时间限制: 1 Sec  内存限制: 128 MB
提交: 15223  解决: 11797
[状态] [讨论版] [提交] [命题人:admin] 


题目描述 


计算A+B 



输入 


输入数据有多组。 
 每组一行，为整数A, B。 



输出 


对每行输入，输出A+B的值，单独占一行。 



样例输入 Copy 

1 2
3 4




样例输出 Copy 

3
7


提示 

此类多实例测试解决方案： 
while(scanf("%d%d",&a,&b)!=EOF) 
 { 
 //读入一组测试数据 
//处理 
//输出结果 
} 
注：EOF是宏定义常量-1，scanf函数遇到文件结束标志函数返回值是-1，键盘输入时，ctrl+z表示输入结束 
 例如：
while(scanf("%d%d",&a,&b)!=EOF) 
     printf("%d\n",a+b); 

*/
#include <stdio.h>
int main()
{
    int n, a, b;
    while (scanf("%d%d", &a, &b) != EOF){
        printf("%d\n", a + b);
    }
        
   
}