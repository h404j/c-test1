#include<stdio.h>
// 写两个函数，分别求两个整数的最大公约数和最小公倍数，用主函数调用这两个函数，并输出结果。两个整数由键盘输入。
int main(){
int a=0,b=0;
printf("请输入两个整数");
scanf("%d%d",&a,&b);
printf("最大公约数%d",divisor(a,b));
printf("最小公倍数%d", mu(a, b));
}
int divisor(int a,int b){
    /* code */
      while (a%b!=0)
      {
          /* code */
          int c=a%b;
          a=b;
          b=c;

      }
      return b;
    
}
int mu(int a,int b){
    int c=divisor(a,b);
    int result=a*b/c;
    return result;
}