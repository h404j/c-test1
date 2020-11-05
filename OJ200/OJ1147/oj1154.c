#include <stdio.h>
int main()
{
    int L, M, S, E, n, arr[10001] = {0};
    scanf("%d", &n);
    for (int X = 0; X < n; X++)
    {
        scanf("%d %d", &L, &M);
        for (int i = 0; i <= L; i++)
        {
            arr[i] = 1;
        }

        for (int Y = 0; Y < M; Y++)
        {
            scanf("%d %d", &S, &E);
            for (int i = S; i <= E; i++)
            {
                arr[i] = 0;
            }
        }
        int sum = 0;
        for (int i = 0; i <= L; i++)
        {
            sum = sum + arr[i];
        }
        printf("%d\n", sum);
    }
}