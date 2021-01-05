#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void encrypt(char *plain, char *cipher)
{
    //把原文字符串plain加密后存入字符串cipher
    int len = strlen(plain);
    int temp, j = 0;
    for (int i = len - 1; i >= 0; i--)
    {
        *(cipher + j) = *(plain + i) - 24; //把字符保存在cipher串中
        j++;                               //不建议保存最终结果 如 90 ，需保存其字符形式'0'
    }
    *(cipher + j) = '\0';
}

int main()
{
    char buf[200], buf1[200];
    gets(buf);
    encrypt(buf, buf1);
    for (int i = 0; i < strlen(buf1); i++)
    {
        printf("%d%d", buf1[i] % 10, buf1[i] / 10);
    }
    printf("\n");
}