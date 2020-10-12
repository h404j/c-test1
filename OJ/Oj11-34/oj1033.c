//给定一个百分制成绩, 请根据百分制成绩输出其对应的等级。转换关系如下：
//90分及以上为’A’，80 ~89为’B’， 70 ~79为’C’， 60 ~69为’D’，60分以下为’E’
#include <stdio.h>

int main()
{
    int a;
    char b;
    scanf("%d", &a);
    if (a <=60)
    {
        b = 'E';
    }
    else if (a <= 69)
    {
        b = 'D';
    }
    else if (a <= 79)
    {
        b = 'C';
    }
    else if (a <= 89)
    {
        b = 'B';
    }else
    {
       b='A';
    }
    
    printf("%c", b );
    return 0;
}