/*

1086: ASCII码排序（多实例测试）
时间限制: 1 Sec  内存限制: 128 MB
提交: 54301  解决: 9819
[状态] [讨论版] [提交] [命题人:admin] 


题目描述 


输入三个字符后，按各字符的ASCII码从小到大的顺序输出这三个字符。 



输入 


输入数据有多组，每组占一行，有三个字符组成，之间无空格。 



输出 


对于每组输入数据，输出一行，字符中间用一个空格分开。 



样例输入 Copy 

qwe
asd
zxc



样例输出 Copy 

e q w
a d s
c x z



提示 


注意：scanf("%c",&ch)格式读字符时，所有字符都是有效输入，如回车符、空格符等,所以每行读取字符之后要处理最后的回车符。 



来源/分类 */

// #include <stdio.h>
// int main()
// {
//     char a, b, c, t;
//     while (scanf("%c%c%c", &a, &b, &c) != EOF)
//     {
//         getchar(); //注意需要抵掉一个回车键
//         if (a > b)
//         {
//             t = a;
//             a = b;
//             b = t;
//         }
//         if (b > c)
//         {
//             t = b;
//             b = c;
//             c = t;
//         }
//         if (a > b)
//         {
//             t = a;
//             a = b;
//             b = t;
//         }
//         printf("%c %c %c\n", a, b, c);
//     }
//     return 0;
// }
#include<stdio.h>
int main(){
char a,b,c;
while (scanf("%c%c%c",&a,&b,&c)!=EOF)
{
    getchar();
    if (a>b)
    {
        char c=a;
        a=b;
        b=c;
    }
    if (a > c)
    {
        char d = a;
        a = c;
        c = d;
    }
    if (b> c)
    {
        char d = b;
        b = c;
        c = d;
    }
    printf("%c %c %c\n",a,b,c);
}

}