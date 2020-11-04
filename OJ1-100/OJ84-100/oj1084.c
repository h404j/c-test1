/*

1084: 计算两点间的距离（多实例测试）
时间限制: 1 Sec  内存限制: 128 MB
提交: 20427  解决: 10807
[状态] [讨论版] [提交] [命题人:admin] 


题目描述 


入两点坐标（X1,Y1）,（X2,Y2）,计算并输出两点间的距离。 



输入 


输入数据有多组，每组占一行，由4个实数组成，分别表示x1,y1,x2,y2,数据之间用空格隔开。 



输出 


对于每组输入数据，输出一行，结果保留两位小数。 



样例输入 Copy 

0 0 0 1
0 1 1 0


样例输出 Copy 

1.00
1.41
*/
// #include<stdio.h>
// #include<math.h>
// int main(){
//     int x1,x2,y1,y2;
//     float d=0;
//     while (scanf("%d%d%d%d",&x1,&x2,&y1,&y2)!=EOF)
//     {
//         d=sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2));
//         printf("%.2f",d);
//     }
    
// }

#include <stdio.h>
#include <math.h>
int main()
{
    double x1, x2, y1, y2, a;
    while (scanf("%lf %lf %lf %lf", &x1, &y1, &x2, &y2) != EOF)
    {
        a = sqrt((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2));
        printf("%.2f\n", a);
    }
    return 0;
}