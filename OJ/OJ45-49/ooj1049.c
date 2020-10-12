#include <stdio.h>
#include<math.h>
int main()
{
    int n, m,sum1 = 0,sum2=0;
    scanf("%d", &m);
    scanf("%d", &n);

    for (int i =m; i <= n; i++)
    {
        
        if (i% 2 != 0)
        {
          sum1=sum1+pow(i,3);
        }else
        {
            sum2 = sum2 + pow(i, 2);
        }
        
    }
    printf("%d %d", sum2,sum1);
    return 0;
}