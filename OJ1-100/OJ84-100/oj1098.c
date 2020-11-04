/*

1098: 复合函数求值（函数专题）
时间限制: 1 Sec  内存限制: 128 MB
提交: 17577  解决: 7672
[状态] [讨论版] [提交] [命题人:admin] 
题目描述 
求复合函数F(G(x))，其中函数F(x)=|x-3|+|x+1|，函数G(x)=x^2-3x。要求编写函数funF()和funG()分别求F(x)和G(x)，其余功能在main()中实现。 
double funF(double x) 
 { 
 //函数返回F(x)的值； 
} 
double funG(double x) 
 { 
 //函数返回G(x)的值； 
} 
本题如果是C/C++代码提交，只需要提交funF和funG函数的定义部分，提交其它内容，编译出错。 
输入 
输入一个实数x。 
输出 
输出复合函数的值，结果保留2位小数。输出占一行。 
样例输入 Copy 
10.2
样例输出 Copy 
144.88
*/

double funF(double x)
{
    //函数返回F(x)的值；F(x)=|x-3|+|x+1|
    double a, b;
    a = x - 3;
    b = x + 1;
    if (a < 0)
    {
        a = -a;
    }
    if (b < 0)
    {
        b = -b;
    }
    return a + b;
}
double funG(double x)
{
    double a = x * x - 3 * x;
    //函数返回G(x)的值；
    return a;
}