#include <stdio.h>
//输入一个字母，若是小写字母，则变为大写输出，否则，原样输出。
int main()
{
    char a,b,c;
    int x= 0;
    scanf("%c%c%c", &a,&b,&c);
    b = (int)a;
    if (b <= 90)
    {
        b=b-64;
        printf("%d", b);
    }
    else
    {
        b = b - 96;
        printf("%d", b);
    }

    return 0;
}