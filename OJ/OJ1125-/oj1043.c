#include <stdio.h>
#include <string.h>
int bToD(char str[])
{
    int x = 0;
    //函数返回二进制数str对应十进制整数
    while (str[x] != '\0')
    {
        x++;
    }

    int sum = str[x - 1] - '0';
    for (int i = x - 2; i >= 0; i--)
    {
        if (str[i] - '0' == 1)
        {
            int sum1 = 1;
            for (int j = 0; j < x - 1 - i; j++)
            {
                sum1 *= 2;
            }
            sum = sum + sum1;
        }
    }
    return sum;
}
int main()
{
    int n, a[3];
    char str[32];
    for (int i = 0; i < 3; i++)
    {
        scanf("%s", str);
        a[i] = bToD(str);
    }
   
}