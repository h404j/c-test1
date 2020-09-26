#include <stdio.h>
#include<math.h>
 void sushu(int n){
     int m=0;
     if (n > 1000)
     {
         return;
     }
     for (int i = 2; i <= sqrt(n); i++)
     {
         if (n % i == 0)
         {
             m = 1;
             break;
         }
     }
     if (m == 0)
     {
         printf("Yes");
     }
     else
     {
         printf("No");
     }
}
int main()
{
    // int n, m = 0;
    // scanf("%d", &n);
   for (int i = 1; i <100; i++)
   {
       sushu(i);
       printf("%d\n",i);
   }
   
    
}