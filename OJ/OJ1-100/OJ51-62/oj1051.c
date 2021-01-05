#include<stdio.h>
#include<math.h>
//数列的定义如下：
//数列的第一项为item，以后各项为前一项的平方根，求数列的前n项的和。
int main(){
    int a,b;
    double c=0,d=0;
    scanf("%d%d",&a,&b);
    c=a;
    d=a;
    if(a<10000&&b<1000){
        for (int i = 1; i < b; i++)
        {
            c=sqrt(c);
            d = d + c;
        } 
    }
    printf("%.2lf",d);
}