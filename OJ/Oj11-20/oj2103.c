#include<stdio.h>
//输入一个字母，若是小写字母，则变为大写输出，否则，原样输出。
int main(){
char a;
int b=0;
scanf("%c",&a);
b=(int)a;
if (b<=90)
{
    printf("%c",a);
}
else
{
    a=a-32;
    printf("%c", a);
}

return 0;
}