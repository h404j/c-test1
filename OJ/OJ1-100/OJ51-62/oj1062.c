#include<stdio.h>
int main(){
    int m,n;
    scanf("%d%d",&m,&n);
    if (m<n)
    {
        int c=m;
        m=n;
        n=c;
    }
    while (m%n!=0)
    {
        int c=m%n;
        m=n;
        n=c;
    }
    printf("%d",n);
    
    
}