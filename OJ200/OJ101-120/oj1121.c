#include <stdio.h>
int main()
{
    int n, dw1 = 0, dw2, time = 0;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &dw2);
        if (dw1 == dw2)
        {
            
        }
        else if (dw2 > dw1)
        {
            time = time + (dw2 - dw1) * 6;
        }
        else
        {
            time = time + (dw1 - dw2) * 4;
        }

        time = time + 5;
        dw1 = dw2;
    }
    printf("%d", time);
}