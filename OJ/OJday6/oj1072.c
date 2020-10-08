/*

1072: 青蛙爬井
时间限制: 1 Sec  内存限制: 128 MB
提交: 16086  解决: 11923
[状态] [讨论版] [提交] [命题人:admin] 


题目描述 


有一口深度为high米的水井，井底有一只青蛙，它每天白天能够沿井壁向上爬up米，夜里则顺井壁向下滑down米，若青蛙从某个早晨开始向外爬，对于任意指定的high、up和down值（均为自然数），计算青蛙多少天能够爬出井口？ 



输入 


输入3个正整数：high、up和down。 



输出 


输出一个整数，表示天数。输出单独占一行。 



样例输入 Copy 

10 2 1



样例输出 Copy 

9



提示 


循环模拟。注意，不能简单地认为每天上升的高度等于白天向上爬的距离减去夜间下滑的距离，因为若白天能爬出井口，则不必等到晚上。 



来源/分类 

**  

 
[提交] [状态] */
#include<stdio.h>
int main(){
    int high,up,down,i=0;
    scanf("%d%d%d",&high,&up,&down);
    if (down<up)
    {
        while (high>0)
        {
            high-=up;
            i++;
            if (high<=0)
            {
                break;
            }
            high+=down;
        }
       printf("%d",i) ;
    }
    
}