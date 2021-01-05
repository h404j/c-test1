/*

1097: 计算平均成绩（函数专题）
时间限制: 1 Sec  内存限制: 128 MB
提交: 16290  解决: 8325
[状态] [讨论版] [提交] [命题人:admin] 


题目描述 


输入某位同学各门课的成绩，输出平均成绩。输入的成绩均为五级制成绩，五级制成绩转换为百分之成绩的规则如下：'A'转换为百分之成绩为95分，'B'对应85分，C对应75分，'D'对应65分，'E'对应40分。 输出的平均成绩为一个实数，保留1位小数。  


要求程序定义一个getScore()函数和一个main()函数，getScore()函数返回一个等级对应的分数，其余功能在main()函数中实现。 
int getScore(char g) 
 {  
 //把等级g转换成对应的分数并返回这个分数。 
 } 
对于C/C++代码的提交，本题要求必须通过定义getScore函数和main函数实现，否则，提交编译错误，要提交完整的程序。 
输入 
输入为一行只包含'A'~'E'的字母，每个字母表示一门课的成绩， 
输出 
输出平均成绩，为一个实数，保留一位小数。 
样例输入 Copy 
AABB
样例输出 Copy 
90.0
*/
#include<stdio.h>
int getScore(char g)
{

   
    switch (g)
    {
    case 'A':
      return 95;
        break;
    case 'B':
        return 85;
        break;
    case 'C':
        return 75;
        break;
    case 'D':
        return 65;
        break;
    case 'E':
        return 40;
        break;
    }

}
int main(){
char g;
int a=0,sum=0;
float av;
while (scanf("%c",&g),g!='\n')
{
    a++;
    sum=sum+getScore(g);
    
}
av=1.0*sum/a;
printf("%.1f\n",av);
return 0;
}
/*#include<stdio.h>

#include <stdlib.h>
int getScore(char g)
{
	int score;
	if(g=='A') score=95;
	else if(g=='B') score=85;
	else if(g=='C') score=75;
	else if(g=='D') score=65;
	else if(g=='E') score=40;
	return(score);
}

int main()
{
	char g;
	int n=0,sum=0;
	float average;
	while(scanf("%c",&g),g!='\n')
	{
		n++;
		sum=sum+getScore(g);
	}
	average=1.0*sum/n;
	printf("%0.1f\n",average);
	return 0;
}*/