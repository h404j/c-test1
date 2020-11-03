#include <stdio.h>
int main()
{
    int a[101] = {0}, b[101] = {0};
    int m, n, index = -1;
    scanf("%d%d", &n, &m);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);//输入a数组的值
    }
    for (int i = 0; i < m; i++)
    {
        scanf("%d", &b[i]); //输入b数组的值
    }
    for (int i = 0; i < n; i++)//遍历a数组
    {
        
        if (a[i] == b[0])//判断a[i]是否等于b[0]
        {
            for (int j = 0; j < m; j++)
            {
                if (a[i + j] != b[j])//a[i+j]!=b[j]说明与b数组不匹配，进入下一个循环
                {
                    break;
                }
                if (j == m - 1)//但j=m-1时说明b是a的子数组，且b数组位于a的i下标
                {
                    index = i;
                }
            }
            if (index >= 0)//index初始值为-1，若index>=0索命b是a的子数组，结束循环
            {
                printf("%d", index);
                break;
            }
            
        }
        if (i == n - 1)//遍历数组之后没有证明b是a的子数组，
        {
            printf("No Answer");
            break;
        }
    }
}