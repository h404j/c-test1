#include<stdio.h>
#include<math.h>
//输入3个整数，输出它们的1次幂、2次幂和3次幂。
int main(){
int a,b,c;
scanf("%d%d%d",&a,&b,&c);
printf("%-9d%-9d%-9d\n", a, a*a, a*a*a);
printf("%-9d%-9d%-9d\n", b, b*b, b*b*b);
printf("%-9d%-9d%-9d\n", c, c*c, c*c*c);
}