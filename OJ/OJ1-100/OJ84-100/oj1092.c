/*

1092: 素数表(函数专题）
时间限制: 1 Sec  内存限制: 128 MB
提交: 22700  解决: 11206
[状态] [讨论版] [提交] [命题人:admin] 


题目描述 

 输入两个正整数m和n，输出m和n之间的所有素数。 
要求程序定义一个primee()函数和一个main()函数，primee()函数判断一个整数n是否是素数，其余功能在main()函数中实现。 
int primee(int n) 
 { 
 //判断n是否为素数， 若n为素数，本函数返回1，否则返回0 
 }  
对于C/C++代码的提交，本题要求必须通过定义primee函数和main函数实现，否则，提交编译错误*/
#include<stdio.h>
#include<math.h>
int prime(int n){
    if (n==1)
    {
        return 0;
    }
    
    for (int i =2; i <=sqrt(n); i++)
    {
        if (n%i==0)
        {
            return 0;
        }
        
    }
    return 1;
    
}
int main(){
    int m,n;
    scanf("%d%d",&m,&n);
    for (int i =m; i <=n; i++)
    {
        if (prime(i)==1)
        {
            printf("%d ",i);
        }
        
    }
    
}