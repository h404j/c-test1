#include <stdio.h>
int main()
{
    int n, a=0,b=0,c=0,d;
    scanf("%d", &n);
   if (n<100)
   {
       for (int i = 0; i < n; i++)
       {
           scanf("%d", &d);
           if (d>0)
           {
               a++;
           }else if (d<0)
           {
               b++;
           }else
           {
               c++;
           }   
       }  
   }
    printf("%d %d %d", b,c,a);
    return 0;
}