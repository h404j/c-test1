#include <stdio.h>
int main()
{
    int m, n, c, d;
    scanf("%d%d", &m, &n);
    c = (n - 2 * m) / 2;
    d = m - c;
    printf("%d %d", d, c);
}