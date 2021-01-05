#include <stdio.h>
#include <string.h>
int main()
{
    char str[1005];
    gets(str);
    int i, j;
    int len = strlen(str);
    int m;
    int count, sum = 0;
    scanf("%d", &m);
    for (i = 0; i < len; i++)
    {
        count = 1;

        if (str[i] == '1' && m != 1)
        {
            for (j = i + 1; j < i + m; j++)
            {
                if (str[j] != '1')
                    break;
                else
                    count++;
            }
        }
        if (count == m)
            sum++;
    }
    printf("%d", sum);
    return 0;
}