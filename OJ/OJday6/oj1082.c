#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        int m;
        scanf("%d", &m);
        for (int j = 7; j <= m; j++)
        {
            if (j % 7 == 0)
            {
                printf("%d ", j);
                continue;
            }
            int a = j;
            while (a >6)
            {
                if (a % 10 == 7 )
                {
                    printf("%d ", j);
                    break;
                }
                a = a / 10;
            }
        }
        printf("\n");
    }
}