/*

1088: 手机短号 （多实例）
时间限制: 1 Sec  内存限制: 128 MB
提交: 16435  解决: 9500
[状态] [讨论版] [提交] [命题人:admin] 


题目描述 


大家都知道，手机号是一个11位长的数字串，同时，作为学生，还可以申请加入校园网，如果加入成功，你将另外拥有一个短号。假设所有的短号都是是 6+手机号的后5位，比如号码为13512345678的手机，对应的短号就是645678。
 现在，如果给你一个11位长的手机号码，你能找出对应的短号吗？ 



输入 


输入数据的第一行是一个N(N <= 200)，表示有N组输入数据，接下来的N行每一行为一个11位的手机号码。 





输出 


输出应包括N行，每行包括一个对应的短号，输出应与输入的顺序一致。 



样例输入 Copy 

2
13512345678
13787600321



样例输出 Copy 

645678
600321



提示 


scanf()函数中，可用%md指定读取位数。 
*/
#include<stdio.h>
int main(){
    int a,b;
    char c[10];
    scanf("%d",&a);
    for (int i = 0; i <a; i++)
    {
        scanf("%*6s%5c",c);
        printf("6%s\n",c);
    }
    
}

// #include <stdio.h>
// int main()
// {
//     int n, i, a, b, c;
//     scanf("%d", &n);
//     for (i = 1; i <= n; i++)
//     {
//         scanf("%*6d%5d", &a);
//         printf("6%05d\n", a);
//     }
//     return 0;
// }