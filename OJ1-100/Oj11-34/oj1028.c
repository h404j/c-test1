#include <stdio.h>
#include <math.h>
int main()
{
    int y;
    while (scanf("%d", &y) != EOF)
    {

        if ((y % 100 != 0 && y % 4 == 0) || y % 400 == 0)
            printf("Yes");
        else
            printf("No");
    }
    return 0;
}