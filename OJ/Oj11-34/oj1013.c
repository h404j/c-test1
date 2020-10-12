#include<stdio.h>
#include <math.h>
int main(){
    //给定A(x1, y1), B(x2, y2)两点坐标，计算它们间的距离。
    float x1,x2,y1,y2;
    scanf("%f%f%f%f",&x1,&x2,&y1,&y2);
    printf("%.2f",sqrt(pow((y1-x1),2)+pow((y2-x2),2)));
    return 0;
}