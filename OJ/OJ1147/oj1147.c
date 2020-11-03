#include <stdio.h>
int main()
{
    int a[101] = {0}, b[101] = {0};
    int m, n, index;
    scanf("%d%d", &n, &m);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", a[i]);
    }
    for (int i = 0; i < m; i++)
    {
        scanf("%d", b[i]);
    }
    for (int i = 0; i < n; i++)
    {
        int flag = 0;
        if (a[i] == b[0] && flag == 0)
        {
            index = i;
            for (int j = 0; j < m; j++)
            {
                if (a[i + j] != b[j])
                {
                    flag = 1;
                    break;
                }
            }
            break;
        }
    }
    printf("%d", index);
}