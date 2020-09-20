#include<stdio.h>
//输入两个整数num1和num2，请你设计一个程序，计算并输出它们的和、差、积、整数商及余数。
int main(){
    int num1,num2;
    
    scanf("%d%d",&num1,&num2);
    printf("%d %d %d %d %d",num1+num2,num1-num2,num1*num2,num1/num2,num1%num2);

}