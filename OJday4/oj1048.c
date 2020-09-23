#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
   if (n<=20)
   {
       for (int i = 1; i <= n; i++)
       {
           double m = 1;
           for (int j = 1; j <= i; j++)
           {
               m = m * j;
           }
           printf("%-4d%-20.0lf\n", i, m);
       }
   }
    return 0;
}