// #include <stdio.h>
// #include <stdlib.h>
// int main()
// {
//     int m, n;
//     scanf("%d%d", &m, &n);
//     int *p;
//     p = (int *)malloc(sizeof(int) * (n * m));
//     int i, j, k;
//     for (i = 0; i < m; i++)
//         for (j = 0; j < n; j++)
//             scanf("%d", &p[i * n + j]);
//     int a[m][n];
//     for (i = 0; i < m; i++)
//         for (j = 0; j < n; j++)
//         {
//             a[i][j] = p[i * n + j];
//         }
//     for (j = 0; j < n; j++)
//     {
//         for (i = 0; i < m - 1; i++)
//             printf("%d ", a[i][j]);
//         printf("%d\n", a[i][j]);
//     }
//     return 0;
// }
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int m, n;
    int i = 0, j = 0;
    scanf("%d%d", &m, &n);
    int **p;
    p = (int **)malloc(sizeof(int) * m);
    for (i = 0; i < m; i++)
        p[i] = (int *)malloc((sizeof(int) * n));

    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d", &p[i][j]);
        }
    }

    for (j = 0; j < n; j++)
    {
        for (i = 0; i < m - 1; i++)
            printf("%d ", p[i][j]);
        printf("%d\n", p[i][j]);
    }
    // for (i = 0; i < m; i++)
    //     free(p[i]);
    // free(p);

    return 0;
}