#include <stdio.h>
void inverse(int n)
{
    int num;
    if (n > 1)
    {
        scanf("%d", &num);
        inverse(n - 1);
        printf("%4d", num);
    }
    if (n == 1)
    {
        scanf("%d", &num);
        printf("%4d", num);
    }
}
int main()
{
    int n;
    scanf("%d", &n);
    inverse(n);
    return 0;
}