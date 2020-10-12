#include<stdio.h>
int main(){
    int a,b,c;
    scanf("%d",&a);
    while (a>10)
    {
    printf("%-2d",a%10);
    a=a/10;
    }
    printf("%d", a);
}