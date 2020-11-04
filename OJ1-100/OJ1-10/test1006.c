#include<stdio.h>
//给出三个整数，分别表示等差数列的第一项、最后一项和公差，求该数列的和。
int main(){
int a,b,c;
int sum=0;
scanf("%d%d%d",&a,&b,&c);
sum = sum + a;
while (a!=b)
{
    a = a + c;
    sum=sum+a;
}
printf("%d",sum);
return 0;
}