// #include <stdio.h>
// int main()
// {
//     int Mi[10][100];
//     int T, N, max, i, j, sum;
//     scanf("%d", &T);
//     for (i = 0; i < T; i++) //输入
//     {
//         scanf("%d", &N);
//         for (j = 0; j < N; j++)
//         {
//             scanf("%d", &Mi[i][j]);
//         }
//     }
//     for (i = 0; i < T; i++) //依次找出那种糖果数量最多的糖果数量并计算出总数量，并输出
//     {
//         max = Mi[i][0];
//         sum = Mi[i][0];
//         for (j = 1; j < N; j++) //见缝插针，只需要保证同种最多的糖果数量减一不大于其他的糖果数量之和即可
//                                 //因为n个糖果有（n-1）个间隙
//         {
//             if (max < Mi[i][j])
//                 max = Mi[i][j];
//             sum = sum + Mi[i][j];
//         }
//         if (sum - max >= max - 1)
//             printf("Yes\n");
//         else
//             printf("No\n");
//     }
//     return 0;
// }
#include <stdio.h>
#include <limits.h>
 //#include <math.h>
int main()
{
    int T, N, j, Mi, max, sum;
    scanf("%d", &T);
    while (T--)
    {
        scanf("%d", &N);
        max = INT_MIN;
        sum = 0;
        while (N--)
        {
            scanf("%d", &Mi);
            if (Mi > max)
            {
                max = Mi;
            }
            sum += Mi;
        }
        if (2 * max - sum <= 1)
            printf("Yes\n");
        else
            printf("No\n");
    }
    return 0;
}
