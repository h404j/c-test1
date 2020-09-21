#include<stdio.h>
//给定一个不多于5位的正整数，判断它是几位数，并输出。
int main(){
    int a,i=0;
    scanf("%d",&a);
    if (a<100000)
    {
        while (a>0)
        {
            i++;
            a=a/10;
        }
        printf("%d",i);
    }
    else
    {
        printf("error");
    }
    

    return 0;
}