/*

1083: 数值统计(多实例测试)
时间限制: 1 Sec  内存限制: 128 MB
提交: 21310  解决: 11026
[状态] [讨论版] [提交] [命题人:admin] 


题目描述 


统计给定的n个数中，负数、零和正数的个数 



输入 


输入数据有多组，每组占一行，每行的第一个数是整数n（n<100），表示需要统计的数值的个数，然后是n个实数；如果n=0，则表示输入结束，该行不做处理。 



输出 


对于每组输入数据，输出一行a,b和c，分别表示给定的数据中负数、零和正数的个数。 



样例输入 Copy 

6 0 1 2 3 -1 0
5 1 2 3 4 0.5
0




样例输出 Copy 

1 2 3
0 0 5

*/
#include <stdio.h>
int main()
{
    double  n, m;
    while (scanf("%lf", &n),n!=0)
    {
        int a = 0, b = 0, c = 0;
        for (int i = 1; i <=n; i++)
        {
            scanf("%lf", &m);
            if (m == 0)
            {
                b++;
            }
            if (m < 0)
            {
                a++;
            }
            if (m > 0)
            {
                c++;
            }
        }
        printf("%d %d %d\n", a, b, c);
    }
}