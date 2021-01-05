#include <stdio.h>
#include <string.h>
int main()
{
    int i, k, len;
    char str[100] = {0};
    gets(str); //不建议使用，尽量用scanf("%[^\n]%*c",str);
    len = strlen(str);
    scanf("%d", &k);
    k = k % 26;
    for (i = 0; i < len; i++)
    {
        if (str[i] < 'A' || (str[i] > 'Z' && str[i] < 'a') || str[i] > 'z')
            str[i] = str[i];
        else
        {
            if (str[i] >= 'a' && str[i] <= 'z')
            {
                if (str[i] - 96 <= 26 - k)
                    str[i] = str[i] + k;
                else
                    str[i] = str[i] + k - 26;
            }
            else
            {
                if (str[i] - 64 <= 26 - k)
                    str[i] = str[i] + k;
                else
                    str[i] = str[i] + k - 26;
            }
        }
    }
    for (i = 0; i < len; i++)
        printf("%c", str[i]);
    return 0;
}