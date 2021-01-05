#include <stdio.h>
#include <math.h>
int common(int x, int y)
{
    // 如果x == y, return x;
    // 如果x > y，求x / 2与y的共同祖先;
    // 否则，求x与y / 2的共同祖先;
    int a = 0;
    for (int i = 1; a != 1; i++)
    {
        int b = 0;
        if (x % 2 == 0)
        {
            a = x / pow(2, i);
        }
        else
        {
            a = (x - 1) / pow(2, i);
        }if (a==y)
        {
        return a;/* code */
        }
        
        for (int j = 1; b != 1; j++)
        {
            if (y % 2 == 0)
            {
                b = y / pow(2, j);
            }
            else
            {
                b = (y - 1) / pow(2, j);
            }
            if (a == b)
            {
                return a;
            }
        }
    }
    return 1;
}
int main()
{
    int a, b;
    scanf("%d%d", &a, &b);
    printf("%d", common(a, b));
}