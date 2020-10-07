/* 

1066: 字符分类统计
时间限制: 1 Sec  内存限制: 128 MB
提交: 23506  解决: 13493
[状态] [讨论版] [提交] [命题人:admin] 


题目描述 


输入一行字符，以回车符作为输入结束的标志。统计其中英文字母、数字字符和其他字符的个数。 



输入 


多个字符，以回车符结束，回车符不作为有效字符。有效字符个数不超过100。 



输出 


输出分3行，格式见输出样例。 



样例输入 Copy 

Abse 4+5*3=?



样例输出 Copy 

letter:4
digit:3
other:5

*/
#include<stdio.h>
int main(){
    int letter=0,digit=0,other=0;
    char ch;
    while (scanf("%c",&ch),ch!='\n')
    {
        if (ch>='0'&&ch<='9')
        {
            digit++;
        }
        else if (ch >= 'a' && ch <= 'z')
        {
           letter++;
        }
        else if (ch >= 'A' && ch <= 'Z')
        {
            letter++;
        }
        else
        {
           other++;
        }
    }
    printf("letter:%d\n",letter);
    printf("digit:%d\n", digit);
    printf("other:%d\n", other);
    return 0;
}