#include <stdio.h>
int main()
{
  sushu();
}
int sushu()
{
    for (int i = 2; i <= 100; i++)
    {
        /* code */
        int a = 0;
        for (int j = 2; j < i / 2; j++)
        {
            /* code */
            if (i % j == 0)
            {
                /* code */
                a++;
            }
        }
        if (a == 0)
        {
            printf("%d是素数", i);
        }
    }
    return 0;
}
int su()
{
    printf("哈哈哈");
    return 0;
}