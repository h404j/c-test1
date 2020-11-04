
#include <stdio.h>
#include <string.h>
int main()
{
    char ch[100] = {0};
    int num, weizhi, length;

    scanf("%d", &num);
    for (int i = 0; i < num; i++)
    {
        scanf("%s", ch);
        scanf("%d", &weizhi);
        length = strlen(ch);
        for (int i = 0; i < length; i++)
        {
            if (ch[i] == '.')
            {
                if (i + weizhi < length) //判断小数点后n位是否已经输入
                {
                    printf("%c\n", ch[i + weizhi]);
                }
                else
                { //小数点第n为直接为0
                    printf("0\n");
                }
            }
        }
    }
}
