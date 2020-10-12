#include <stdio.h>
//已知某位学生的数学、英语和计算机课程的成绩，求该生三门课程的平均分。
int main()
{
    int a, b, c;
    float d;
    scanf("%d%d%d", &a, &b, &c);
    d = (float)(a + b + c) / 3;
    printf("%.2f", d);
}