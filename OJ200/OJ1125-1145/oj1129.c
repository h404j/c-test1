#include <stdio.h>
int main()
{
    int y, m, d, i, s = 0;
    scanf("%d-%d-%d", &y, &m, &d);
    for (i = 1; i < m; i++)
    {
        if (i == 4 || i == 6 || i == 9 || i == 11)
            s += 30;
        else if (i == 2)
            s += 28;
        else
            s += 31;
    }
    if (i > 2 && y % 4 == 0 && y % 100 != 0 || y % 400 == 0)
        s += 1;
    printf("%d\n", s + d);
    return 0;
}