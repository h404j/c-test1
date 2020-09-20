#include<stdio.h>
#define PI 3.14159
//输入圆的半径，求圆的周长和面积。 要求定义圆周率为如下宏常量
//#define PI 3.14159
int main(){
    float r=0,s=0,c=0;
    scanf("%d",&r);
    c=2*r*PI;
    s=r*r*PI;
    printf("%.2f %.2f",c,s);
}