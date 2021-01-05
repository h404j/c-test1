/*

1076: 三位数求解
时间限制: 1 Sec  内存限制: 128 MB
提交: 23353  解决: 11697
[状态] [讨论版] [提交] [命题人:admin] 
题目描述 
已知xyz+yzz=n，其中n是一个正整数，x、y、z都是数字（0-9），编写一个程序求出x、y、z分别代表什么数字。如果无解，则输出“No Answer” 
注意：xyz和yzz表示一个三位数，而不是表示x*y*z和y*z*z。 
输入 
输入一个正整数n。 
输出 
输出一行，包含x、y、z的值，每个数值占4列。 
样例输入 Copy 

532
样例输出 Copy 

   3   2   1
提示 
注意一个三位数的百位数字不能为0。 
*/
#include <stdio.h>
int main()
{
    //这道题大体上是从74题复制过来的，两个题思路相同
    int n, x, y, z, flag = 0;
    scanf("%d", &n);
    for (x = 1; x <= 9; x++) //i是男人
    {
        for (y = 1; y<= 9; y++) //j是女人
        {
            for (z = 0; z <= 9; z++) //k是小孩
            {
                if ((x*100+y*10+z+y*100+z*10+z)==n) //公鸡母鸡小鸡的数量和买它们所花费的钱等于n
                {
                    flag = 1;
                    printf("%4d%4d%4d\n", x, y, z);
                }
            }
        }
    }
    if (flag == 0)
    {
        printf("No Answer");
    }
}