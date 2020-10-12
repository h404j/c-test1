#include<stdio.h>
//求实数的绝对值。
int main(){
    float a;
    scanf("%f",&a);
    if (a>=0)
    {
        printf("%.2f",a);
    }
    else
    {
        /* code */
        printf("%.2f", -a);
    }
    
return 0;
}