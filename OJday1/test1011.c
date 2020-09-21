#include<stdio.h>
//输入圆柱体的底面半径r和高h，计算圆柱体的表面积并输出到屏幕上。要求定义圆周率为如下宏常量
#define PI 3.14159
int main(){
float r,h;
scanf("%f%f",&r,&h);
printf("%.2f",2*PI*r*r+2*PI*r*h);
return 0;
}