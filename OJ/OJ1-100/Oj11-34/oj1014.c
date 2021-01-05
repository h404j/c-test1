#include <stdio.h>
#include <math.h>
// 给出三角形的三条边，求三角形的面积。
int main()
{
    float a, b, c, p, s;
    scanf("%f%f%f", &a, &b, &c);
    p = (a + b + c) / 2;
    s = p * (p - a)*(p - b)*(p - c);
    printf("%.2f", sqrt(s));
    return 0;
}