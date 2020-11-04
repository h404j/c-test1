#include <stdio.h>
void convert(int n, char str[])
{
    int i;
    for (i = 0; n / 2 != 0; i++)
    {
        str[i] = n % 2;
        n = n / 2;
    }
    str[i] = n%2;
    for (i - 1; i >= 0; i--)
    {
        printf("%d", str[i]);
    }
}
int main()
{
    int n;
    char str[10000];
    scanf("%d", &n);
    convert(n, str);
}