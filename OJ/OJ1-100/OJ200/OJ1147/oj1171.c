#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void encrypt(char *plain, char *cipher)
{
    //��ԭ���ַ���plain���ܺ�����ַ���cipher
    int len = strlen(plain);
    int temp, j = 0;
    for (int i = len - 1; i >= 0; i--)
    {
        *(cipher + j) = *(plain + i) - 24; //���ַ�������cipher����
        j++;                               //�����鱣�����ս�� �� 90 ���豣�����ַ���ʽ'0'
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