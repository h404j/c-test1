/*

1101: 逆序数字（函数专题）
时间限制: 1 Sec  内存限制: 128 MB
提交: 14870  解决: 7530
[状态] [讨论版] [提交] [命题人:admin] 


题目描述 


输入一个正整数n，计算n的逆序数m，输出m与n的和。要求程序定义一个inverse()函数和一个main()函数，inverse()函数接收一个整数值,返回这个数中数字逆序后的结果值。例如,给定数7631,函数返回1367 。 
int inverse(int n) 
 { 
 //计算并返回n的逆序数字 
} 
本题如果是C/C++代码提交，只需要提交inverse函数的定义部分，提交其它内容，编译出错。 
输入 
一个正整数n，输入保证计算结果在int范围内。 
输出 
输出一个整数，n与n的逆序数的和。输出占一行。 
样例输入 Copy 
1780
样例输出 Copy 
2651
*/
#include <stdio.h>

int inverse(int n)
{
    //计算并返回n的逆序数字
    int c, d = 0, b = n;

    for (int i = 0; n > 9; i++)
    {
        c = n % 10;
        d = d * 10 + c;
        n = n / 10;
    }
    d = d * 10 + n;
    return d;
}
int main()
{
    printf("%d", inverse(1780));
}