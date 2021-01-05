#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    double sum=0;
    if (n <= 10)
    {
        for (int i = 1; i <= n; i++)
        {
            double m = 1;
            for (int j = 1; j <= i; j++)
            {
                m = m * j;
            }
           sum=sum+m; 
        }
    }
    printf("%.0lf",sum);
    return 0;
}