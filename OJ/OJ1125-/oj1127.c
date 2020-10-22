
#include <stdio.h>
int main()
{
    int m, n, p, i, j, k,x1,x2,x3;
    int a[11][11], b[11][11], c[11][11];
    scanf("%d%d%d", &m, &p, &n);
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < p; j++)
            scanf("%d", &a[i][j]);
    }
    for (i = 0; i < p; i++)
    {
        for (j = 0; j < n; j++)
            scanf("%d", &b[i][j]);
    }
    for (i = 0; i < m; i++)
        for (j = 0; j < n; j++)
        {
            c[i][j] = 0;
            for (k = 0; k < p; k++){
                x1 = a[i][k];
                x2 = b[k][j];
                c[i][j] += a[i][k] * b[k][j];
                x3 = c[i][j];
            }
           
        }
    for (i = 0; i < m; i++)
    {
        printf("%d", c[i][0]);
        for (j = 1; j < n; j++)
        {
            printf(" %d", c[i][j]);
        }
        printf("\n");
    }
    return 0;
}
