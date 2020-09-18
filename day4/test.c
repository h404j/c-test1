#include <stdio.h>
//利用条件运算符的嵌套来完成此题：学习成绩>=90分的同学用A表示，60-89分之间的用B表示，60分以下的用C表示。
int main()
{
    int a = 0;
    scanf("%d", &a);
    char b = (a >= 90) ? 'A' : ((a >= 60) ? 'B' : 'C');
    printf("%c", b);
    return 0;
}