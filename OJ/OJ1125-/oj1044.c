#include <stdio.h>
#include <string.h>
void dToK(int n, int k, char str[])
{
    int i;
    for (i = 0; n / k != 0; i++)
    {
        str[i] = n % k;
        n = n / k;
    }
    str[i] = n % k;
    for (i - 1; i >= 0; i--)
    {
        printf("%d", str[i]);
    }
    printf("\n");
}
int main()
{
    char ch[1000];
    int n;
    scanf("%d", &n);
    dToK(n, 2, ch);
    dToK(n, 3, ch);
    dToK(n, 7, ch);
    dToK(n, 8, ch);

    return 0;
}
