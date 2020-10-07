#include<stdio.h>
int main(){
    int m,k,day=0;
    scanf("%d%d",&m,&k);
    while (m>0)
    {
        m--;
        day++;
        if (day%k==0)
        {
           m++;
        }
       
    }
    printf("%d",day);
}