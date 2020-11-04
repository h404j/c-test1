/*

1094: 统计元音（函数专题）
时间限制: 1 Sec  内存限制: 128 MB
提交: 24620  解决: 8316
[状态] [讨论版] [提交] [命题人:admin] 
题目描述 
输入一个字符串，统计其中元音字母的个数。要求使用函数vowel()用来判断是否为元音,其余功能在main()函数中实现。  
int vowel(char ch) 
 {
              //如果ch是元音，返回1，否则返回0
 } 
本题如果是C/C++代码提交，只需要提交vowel函数的定义部分，提交其它内容，编译出错。 
输入 
 输入一个字符串，长度不超过1000，以回车符结束。 
输出 
 输出一个整数，表示元音字母个数。输出单独占一行。 
样例输入 Copy 
Hello world!
样例输出 Copy 
3
*/
#include<stdio.h>
#include<string.h>
int vowel(char ch)
{
    //如果ch是元音，返回1，否则返回0'
    if (ch == 'a' || ch == 'A' || ch == 'E' || ch == 'e' || ch == 'u' || ch == 'U')
    {
        return 1;
    }else if (ch == 'I' || ch == 'i' || ch == 'O' || ch == 'o')
    {
        return 1;
    }else
    {
        return 0;
    }
    
}
int main(){
    char ch;
    int k=0;
   
    while (scanf("%c",&ch),ch!='\n')
    {
        if (vowel(ch)==1)
        {
            k++;
        }
    }
    printf("%d",k);
    
}