 #include<stdio.h>
#include <string.h>
int main()
{
    char str1[1010], str2[1010];
    int num1[10][1001] = {{0}}, num2[10][1001] = {{0}}; //定义并初始化二维数组
    int T, i, len1, len2, k, j, max[10] = {0};
    scanf("%d", &T);
    for (i = 0; i < T; i++)
    {
        memset(str1, 0, sizeof(str1)); //把所有数组全部初始化为0;
        memset(str2, 0, sizeof(str2));
        scanf("%s", str1);
        scanf("%s", str2);
        len1 = strlen(str1);
        len2 = strlen(str2);
        k = 0;
        for (j = len1 - 1; j >= 0; j--) //将数组str逆序复制到数组num中，方便接下来计算相加
        {
            num1[i][k] = str1[j] - '0';
            k++;
        }
        k = 0;
        for (j = len2 - 1; j >= 0; j--)
        {
            num2[i][k] = str2[j] - '0';
            k++;
        }
        max[i] = len1 > len2 ? len1 : len2;
        for (j = 0; j < max[i]; j++) //逐项对应相加并存入num1中
        {
            num1[i][j] = num2[i][j] + num1[i][j];
            if (num1[i][j] >= 10)
            {
                num1[i][j] -= 10;
                num1[i][j + 1]++;
            }
        }
    }
    for (i = 0; i < T; i++) //顺序输出，同时检查最高位是否进位（大于10就需要进位）
    {
        if (num1[i][max[i]] != 0)
            printf("%d", num1[i][max[i]]);
        for (j = max[i] - 1; j >= 0; j--)
            printf("%d", num1[i][j]);
        printf("\n");
    }

    return 0;
}
