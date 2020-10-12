#include<stdio.h>
/*
题目描述 
输入一个整数，判断该数是奇数还是偶数。 
输入 
输入整数n。 
输出 
如果该数是奇数就输出“odd”，偶数就输出“even”（输出不含双引号）。 
样例输入 Copy 
8
样例输出 Copy 
even
 */
int main(){
int a;
scanf("%d",&a);
if (a%2==0)
{
    printf("even");
}
else
{
    printf("odd");
}
return 0;
}