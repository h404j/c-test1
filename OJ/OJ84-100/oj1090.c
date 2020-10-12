#include<stdio.h>
int main(){
    int a,b;
    
   
    for (int i = 0; i <100; i++)
    {
        scanf("%d%d", &a, &b);
        printf("%d", a ^ b);
    }
}