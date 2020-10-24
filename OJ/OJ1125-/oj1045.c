#include <stdio.h>
int main()
{
    char num[10];
    int x = 0, i;
    scanf("%s", &num);
    for (i = 0; num[i] != '\0'; i++)
    {
        if (num[i] > '4')
            num[i]--;
        x = x * 9 + (num[i] - '0');
    }
    printf("%d\n", x);
    return 0;
}