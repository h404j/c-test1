#include<stdio.h>
int len(char *sp)
{
    int len=0;
    //实现sp所指串的长度，不计空格。
    while (*sp!='\0')
    {
        if (*sp!=' ')
        {
            len++;
        }
        
        // if(*sp>='A'&&*sp<='Z'){
        //     len++;
        //     // sp++;
        //     // continue;
        // }
        // if (*sp >='a' && *sp <='z')
        // {
        //     len++;
        //     sp++;
        //     continue;
        // }
        sp++;
    }
    return len;
    
}
int main(){
    char st[100];
    char *sp;
    gets(st);
    sp=&st[0];
    printf("%d",len(sp));
}