#include<stdio.h>
int main(){
    int a=0;
    scanf("%d",&a);
    if (a<30)
    {
        printf("%d",a*50);
    }
    else
    {
        printf("%d", a * 48);
    }
    
    return 0;
}