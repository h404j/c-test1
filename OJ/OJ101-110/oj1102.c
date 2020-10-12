/*

1102: 火车票退票费计算（函数专题）
时间限制: 1 Sec  内存限制: 128 MB
提交: 15971  解决: 5470
[状态] [讨论版] [提交] [命题人:] 
题目描述 
2013年起，火车票退票费比例下调：票面乘车站开车时间前48小时以上的按票价5%计退票费。同时，车票退票费的计算方法不再四舍五入到元为单位，而是以5角为单位：尾数小于0.25元的舍去、不小于0.25元且小于0.75元的计为0.5元、不小于0.75元的进为1元。编写一个函数，计算退票费，假定退票时间举例开车时间在48小时以上。函数原型如下： 
double CancelFee(double price); 
本题如果是C/C++代码提交，只需要提交CancelFee函数的定义部分，提交其它内容，编译出错。 
输入 
输入一个实数，表示火车票票面价格。 
输出 
输出一个实数，表示退票费，结果保留一位小数。 
样例输入 Copy 
106
样例输出 Copy 

5.5

*/
// double piaojia(double i)
// {
//     double x = i * 0.05;
//     double y;
//     y = (int)x;
//     if (x - 0.25 < y)
//         y += 0;
//     else if (x - 0.25 >= y && x - 0.25 < y + 0.5)
//         y += 0.5;
//     else
//         y += 1;
//     return y;
// }

#include<stdio.h>
double CancelFee(double price){
    double a=price*0.05,d;
    float b=(int)a;
    float c=a-b;
    if (c>=0.25&&c<0.75)
    {
       c=0.5;
    }
    else if (c>=0.75)
    {
        c=1;
    }
    else
    {
        c=0;
    }
    d=c+b;
    return d;

}
int main(){
    printf("%.1f",CancelFee(106));
}