/*
1093: 验证哥德巴赫猜想（函数专题）
时间限制: 1 Sec  内存限制: 128 MB
提交: 16348  解决: 10508
[状态] [讨论版] [提交] [命题人:admin] 
题目描述 
哥德巴赫猜想大家都知道一点吧。我们现在不是想证明这个结论，而是对于任给的一个不小于6的偶数，来寻找和等于该偶数的所有素数对。做好了这件实事,就能说明这个猜想是成立的。 
 要求程序定义一个prime()函数和一个main()函数，prime()函数判断一个整数n是否是素数，其余功能在main()函数中实现。 
int prime(int n) 
 { 
 //判断n是否为素数， 若n为素数，本函数返回1，否则返回0 
 } 
对于C/C++代码的提交，本题要求必须通过定义prime函数和main函数实现，否则，提交编译错误，要提交完整的程序。 
输入 
一个偶数M (M是6到1000000之间的一个偶数). 
输出 
输出和等于该偶数的所有素数对a和b，按a递增的顺序输出，(a,b)和(b,a)被视为同一个素数对。 
*/

#include <stdio.h>
#include <math.h>
    int prime(int n)
    {
        if (n == 1)
        {
            return 0;
        }

        for (int i = 2; i <= sqrt(n); i++)
        {
            if (n % i == 0)
            {
                return 0;
            }
        }
        return 1;
    }
    int main()
    {
        int m, n;
        scanf("%d", &m);
        if (m % 2 != 0)
        {
            return 0;
        }

        for (int i =1; i <=m / 2; i++)
        {
            if (prime(i) == 1 && prime((m - i)) == 1)
            {
                printf("%d %d\n", i, m - i);
            }
        }
    }
    