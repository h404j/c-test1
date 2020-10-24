#include <stdio.h>
#include <string.h>
int KToD(char ch[], int k)
{
    int n = 0, i = 0;
    int len = strlen(ch);
    for (i = 0; i < len; i++)
        n = n * k + ch[i] - '0';
    return n;
}
int main()
{
    char ch[31];
    int k;
    int max, j, i;
    int n, c = 0;
    scanf("%d", &n);
    scanf("%s%d", ch, &k);
    max = KToD(ch, k);
    for (i = 2; i <= n; i++)
    {
        scanf("%s%d", ch, &k);
        if (KToD(ch, k) > max) //取最大的数
            max = KToD(ch, k);
    }
    printf("%d", max);
    return 0;
}
