#include <stdio.h>
int digitSum(int n)
{
    int sum = 0;
    //函数返回n的各位数字之和
    for (int i = 0; n > 0; i++)
    {
        sum = sum  + n % 10;
        n = n / 10;
    }
   if (sum>10)
   {
       return digitSum(sum);
   }
    return sum;
}
int main()
{
    int a;
    scanf("%d",&a);

    printf("%d", digitSum(a));
}