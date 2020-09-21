#include <stdio.h>
#include <math.h>
int main()
{

    /*设银行1年期定期存款年利率为2.25%，存款本金为deposit元，试编程计算并输出n年后的本利之和。

输入
输入一个正整数和一个实数，分别代表存款年数和存款本金。

输出
输出一个双精度实数，小数点后保留6位有效数字。

样例输入 Copy
2 100
样例输出	Copy
104.550625*/
    int years;      //存款的年数
    double deposit; //存款的本金
    double moneys;  //存款一年的本金
    scanf("%d", &years);
    scanf("%lf", &deposit);
    printf("%.6lf", pow(1 + 0.0225, years) * deposit);
    return 0;
}