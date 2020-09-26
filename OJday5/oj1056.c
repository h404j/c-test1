#include<stdio.h>
int main(){
    long m,n,y=0,i;
    scanf("%d %d",&m,&n);
  if (m>n)
  {
    return 0;
  }
  
    for ( i=n; i>=m; i--)
    {
       if (i%7==0&&i%4!=0)
       {
           y=i;
           break;
       }
    }
    if (y==0)
    {
       printf("no");
    }
    else
    {
        printf("%ld", y);
    }
    
    
}