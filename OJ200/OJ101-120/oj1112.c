#include <stdio.h>
void convert(int n)
{
    if (n > 0)
    {
        convert(n / 2);
        printf("%d", n % 2);
    }
}
int main()
{
    int a;
    scanf("%d", &a);
    convert(a);
}
